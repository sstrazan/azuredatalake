using Microsoft.Analytics.Interfaces;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PopularMoviesCommon.Extractors
{
    public class MoviesInfoExtractor : IExtractor
    {
        private Encoding _encoding;
        private byte[] _rowDelim;
        private char _colDelim;

        public MoviesInfoExtractor(Encoding encoding = null, string rowDelim = "\n", char colDelim = '\t')
        {
            this._encoding = ((encoding == null) ? Encoding.UTF8 : encoding);
            this._rowDelim = this._encoding.GetBytes(rowDelim);
            this._colDelim = colDelim;
        }

        public override IEnumerable<IRow> Extract(IUnstructuredReader input, IUpdatableRow output)
        {
            string line;

            // read line by line
            foreach (Stream current in input.Split(this._rowDelim))
            {
                using (StreamReader streamReader = new StreamReader(current, this._encoding))
                {
                    line = streamReader.ReadToEnd().Trim();

                    // split line by column delimiter
                    string[] parts = line.Split(this._colDelim);
                    int count = 0; // start with first column
                    foreach (string part in parts)
                    {
                        if (output.Schema[count].Type == typeof(String))
                            output.Set(count, part);
                        else if (output.Schema[count].Type == typeof(Int32))
                            output.Set(count, Int32.Parse(part));
                        else if (output.Schema[count].Type == typeof(Boolean))
                            output.Set(count, part == "1");
                        else if (output.Schema[count].Type == typeof(DateTime))
                        {
                            try
                            {
                                output.Set(count, DateTime.Parse(part));
                            }
                            catch
                            {
                                output.Set(count, DateTime.MinValue);
                            }
                        }
                        else if (output.Schema[count].Type == typeof(DateTime?))
                        {
                            if (String.IsNullOrEmpty(part))
                            {
                                output.Set<DateTime?>(count, null);
                            }
                            else
                            {
                                try
                                {
                                    output.Set(count, DateTime.Parse(part));
                                } catch
                                {
                                    output.Set(count, DateTime.MinValue);
                                }
                            }
                        }
                        else
                            throw (new Exception("Unknown data type specified: " + output.Schema[count].Type.Name));

                        count++;
                    }
                }
                yield return output.AsReadOnly();
            }
            yield break;

        }
    }
}
