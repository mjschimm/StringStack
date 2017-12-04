#ifndef _STRINGSTACK_
#define _STRINGSTACK_
#include <string>

class StringStack : public TrueStack
{
public:
  virtual std::string pop_string() = 0;
  virtual void push_string(std::string) = 0;
  virtual bool isEmpty() = 0;
};

#endif