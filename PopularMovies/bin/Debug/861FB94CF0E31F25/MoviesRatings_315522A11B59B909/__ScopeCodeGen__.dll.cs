using Microsoft.Analytics.Interfaces;
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





	public class SqlTransformer_7 : IProcessor
	{
		public override IRow Process(IRow inRow, IUpdatableRow outRow)
		{
			var row = (ScopeEngineManaged.SqlIpRow)inRow;
			var output = (ScopeEngineManaged.SqlIpUpdatableRow)outRow;
			int exceptionIndex = 0;
			try
			{
				System.Int32 col_MovieId = row.GetInternal<System.Int32>(0);
				System.Decimal? col_AvgRating = row.GetInternal<System.Decimal?>(1);
				System.Int64? col_NumberOfRatings = row.GetInternal<System.Int64?>(2);
				output.SetInternal(0, Math.Round((decimal)col_AvgRating, 2));
				exceptionIndex++;
				output.SetInternal(1, col_MovieId);
				exceptionIndex++;
				output.SetInternal(2, col_NumberOfRatings);
				exceptionIndex++;
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			return output.AsReadOnly();
		}
		public static string[] exceptionsInfo = 
		{
			@"Math.Round((decimal)AvgRating, 2)",
			@"MovieId",
			@"NumberOfRatings",
		};
	}








	public class SqlFilterTransformer_14 : IProcessor
	{
		public override IRow Process(IRow inRow, IUpdatableRow outRow)
		{
			var row = (ScopeEngineManaged.SqlIpRow)inRow;
			var output = (ScopeEngineManaged.SqlIpUpdatableRow)outRow;
			System.Int32 col_MovieId = row.GetInternal<System.Int32>(0);
			System.Int64 col_partialagg2__ = row.GetInternal<System.Int64>(1);
			System.Decimal? col_partialagg3__ = row.GetInternal<System.Decimal?>(2);
			System.Int64 col_partialagg4__ = row.GetInternal<System.Int64>(3);
			bool bPicked = false;
			int exceptionIndex = 0;
			try
			{
				{
					bPicked = true;
					output.SetInternal<System.Int64?>(0, ((long?)col_partialagg2__));
					exceptionIndex++;
					output.SetInternal<System.Decimal>(1, (Math.Round((decimal)(col_partialagg4__ == 0 ? (decimal?)null : col_partialagg3__ / col_partialagg4__), 2)));
					exceptionIndex++;
					output.SetInternal<System.Int32>(2, (col_MovieId));
					exceptionIndex++;
				}
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			if(bPicked)
			{
			    return output.AsReadOnly();
			}
			else
			{
			    return null;
			}
		}
		public static string[] exceptionsInfo = 
		{
			@"(long?)partialagg2__",
			@"Math.Round((decimal)(partialagg4__ == 0 ? (decimal?)null : partialagg3__ / partialagg4__), 2)",
			@"MovieId",
		};
	}





































	public static class __OperatorFactory__
	{
		public static Microsoft.Analytics.Interfaces.IExtractor Create_Extract_0()
		{
			return new PopularMoviesCommon.Extractors.MoviesInfoExtractor(colDelim: '|');
		}
		public static string Name_Extract_0 = "PopularMoviesCommon.Extractors.MoviesInfoExtractor";
		public static Microsoft.Analytics.Interfaces.IProcessor Create_Process_8()
		{
			return new ___Scope_Generated_Classes___.SqlFilterTransformer_14();
		}
		public static string Name_Process_8 = "___Scope_Generated_Classes___.SqlFilterTransformer_14";
	}
}
