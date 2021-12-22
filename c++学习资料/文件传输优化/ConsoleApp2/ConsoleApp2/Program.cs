using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ConsoleApp2
{
    class Program
    {

        static string configFile = @"G:\config1.txt";

        static void InserCopyInfo(String sourceFile, string destFile)
        {
            using (StreamWriter sw = new StreamWriter(configFile,true))
            {
                sw.WriteLine(sourceFile + "|" + destFile);
            }
        }
        static void Main(string[] args)
        {
            string SouceDirection = @"D:\Program Files (x86)\UnrealEngine-4.25\Engine\Binaries\Win64";

            string DestDirection = @"E:\testdatacopy";


            DirectoryInfo TheFolder = new DirectoryInfo(SouceDirection);
           
            //遍历文件
            foreach (FileInfo NextFile in TheFolder.GetFiles())
            {
                InserCopyInfo(NextFile.FullName, DestDirection + @"\" + NextFile.Name);

                //Thread.Sleep(3000);
            }
        }
    }
}
