using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {


        static string configFile = @"G:\config1.txt";

        class FileCopyInfo
        {
            public string SourceFileName;
            public string DestFileName;
            public bool IsOK;
            public bool IsSuccess;
        };

        static FileCopyInfo ReadNextCopyFile()
        {
            try
            {    // 创建一个 StreamReader 的实例来读取文件 
                // using 语句也能关闭 StreamReader
                using (StreamReader sr = new StreamReader(configFile))
                {
                    string line;

                    // 从文件读取并显示行，直到文件的末尾 
                    while ((line = sr.ReadLine()) != null)
                    {
                        string[] content = line.Split('|');
                        if (content.Length == 2)
                        {
                            FileCopyInfo fileinfo = new FileCopyInfo();
                            fileinfo.IsOK = false;
                            fileinfo.IsSuccess = false;
                            fileinfo.SourceFileName = content[0];
                            fileinfo.DestFileName = content[1];
                            return fileinfo;
                        }
                    }
                }
            }
            catch (Exception e)
            {
                // 向用户显示出错消息
                Console.WriteLine("The file could not be read:");
                Console.WriteLine(e.Message);
            }
            return null;


        }

        static void WriteCopyFileInfo(FileCopyInfo info)
        {
            try
            {
                ArrayList fileContent = new ArrayList();

                // 创建一个 StreamReader 的实例来读取文件 
                // using 语句也能关闭 StreamReader
                using (StreamReader sr = new StreamReader(configFile))
                {
                    string line;
                    string[] content;
                    // 从文件读取并显示行，直到文件的末尾 
                    while ((line = sr.ReadLine()) != null)
                    {
                        content = line.Split('|');
                        
                        if (content[0] == info.SourceFileName && 
                            content[1] == info.DestFileName)
                        {
                            line += "|" + (info.IsSuccess ? "OK" : "FAILURE");
                        }
                        fileContent.Add(line);
                    }
                }

                using (StreamWriter sw = new StreamWriter(configFile))
                {
                    foreach(String line in fileContent)
                    {
                        sw.WriteLine(line);
                    }
                }


                }
            catch (Exception e)
            {
                // 向用户显示出错消息
                Console.WriteLine("The file could not be read:");
                Console.WriteLine(e.Message);
            }
            

        }

        static bool CopyFile(string SourceFileName, string DestFileName)
        {
            if (!File.Exists(SourceFileName))
            {
                return false;
            }

            if (File.Exists(DestFileName))
            {
                return false;
            }

            try
            {
                File.Copy(SourceFileName, DestFileName, false);//三个参数分别是源文件路径，存储路径，若存储路径有相同文件是否替换
                Thread.Sleep(6000);
            }
            catch (Exception e)
            {
                return false;
            }
            return true;
        }


        static void Main(string[] args)
        {

            do
            {
                FileCopyInfo fileinfo = ReadNextCopyFile();
                if (fileinfo == null || fileinfo.IsOK)
                {
                    Console.WriteLine("Wait for Copying...");
                    Thread.Sleep(5000);
                    
                    continue;
                    
                }
                bool success = CopyFile(fileinfo.SourceFileName, fileinfo.DestFileName);
                fileinfo.IsSuccess = success;
                WriteCopyFileInfo(fileinfo);

                Console.WriteLine((fileinfo.IsSuccess ? "SUCCESS:" : "FAILURE:") + fileinfo.SourceFileName + " to " + fileinfo.DestFileName);
            
            } while (true);
        }
    }
}
