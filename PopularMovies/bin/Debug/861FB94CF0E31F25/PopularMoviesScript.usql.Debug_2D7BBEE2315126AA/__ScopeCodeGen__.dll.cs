﻿using Microsoft.Analytics.Interfaces;
using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection;
using System.IO;
using System.Text.RegularExpressions;
using System.Threading;
using System.Runtime.Serialization;
using System.Linq;
using System.Globalization;
using Microsoft.Analytics.Types.Sql;
using System.Runtime.Versioning;
[assembly:TargetFramework(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")]

public class ___Scope_Generated_Classes___
{
































	public static class __OperatorFactory__
	{
		public static Microsoft.Analytics.Interfaces.IExtractor Create_Extract_0()
		{
			return new PopularMoviesCommon.Extractors.MoviesInfoExtractor(colDelim: '|');
		}
		public static string Name_Extract_0 = "PopularMoviesCommon.Extractors.MoviesInfoExtractor";
	}
}
