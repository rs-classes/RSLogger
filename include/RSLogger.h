#ifndef RSLOGGER_H_
#define RSLOGGER_H_

#include "../../RSFile/include/RSFile.h"

class RSLogger
{
 public:
  RSLogger(const char* name);

  int WriteLog(const char* message);
  //http://stackoverflow.com/questions/17250932/how-to-get-the-time-elapsed-in-c-in-milliseconds-windows

 protected:
  int InitLog();
  const char* m_name;
  RSFile* m_file;
};

#endif 
