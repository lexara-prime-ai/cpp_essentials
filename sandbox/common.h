#ifndef _COMMON_H_

#include <iostream>
static std::string message = "Compilation [SUCCESSFUL]...";

class Constants {
public:
  static std::string getMessage() { return message; }
};

void print();

#endif