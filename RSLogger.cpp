#include "include/RSLogger.h"

RSLogger::RSLogger(const char* name)
{
  m_name = name;
  m_file = new RSFile(m_name, "w");
  InitLog();
}
int RSLogger::WriteLog(const char* message)
{
  m_file->Write(message);
}
  
int RSLogger::InitLog()
{
  WriteLog("This is the log file of: ");
  WriteLog(m_name);
  WriteLog("\r\n");
  
  WriteLog("The creation date of this file is: ");
  WriteLog("\r\n");
  return 0;
}
