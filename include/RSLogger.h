#ifndef RSLOGGER_H_
#define RSLOGGER_H_

class RSLogger
{
 public:
  RSLogger(const char* name);
  RSLogger(const char* name, char lvl);

  int Log(char lvl, const char* message);
  int Log(const char* message);
  //http://stackoverflow.com/questions/17250932/how-to-get-the-time-elapsed-in-c-in-milliseconds-windows
 protected:
  char m_lvl;
  char m_name;
};

#endif 
