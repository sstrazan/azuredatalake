using Microsoft.Analytics.Interfaces;
using Microsoft.Analytics.Types.Sql;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;

namespace PopularMovies
{
    public class CustomFunctions
    {
        public static string ParseUnixTimestampCodeBehind(double unixTimeStamp)
        {
            return unixTimeStamp.ToString().Substring(0, 2);
        }

        
    }
}
