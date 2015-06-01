#ifndef RSLOGGER_H_
#define RSLOGGER_H_

#include "../../RSFile/include/RSFile.h"

class RSLogger
{
 public:
  static RSLogger& getInstance(const char* name);
  //http://stackoverflow.com/questions/86582/singleton-how-should-it-be-used

  int WriteLog(const char* message);
  //http://stackoverflow.com/questions/17250932/how-to-get-the-time-elapsed-in-c-in-milliseconds-windows

 protected:
  int InitLog();
  const char* m_name;
  RSFile* m_file;

private:
  RSLogger(const char* name);
  // Stop the compiler generating methods of copy the object
  RSLogger(RSLogger const& copy);            // Not Implemented
  RSLogger& operator=(RSLogger const& copy); // Not Implemented
};

#endif 
