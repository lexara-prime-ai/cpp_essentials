#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

int main(int argc, char **argv) {
  char buf[128]{};
  cout << "Provide workflow name? ";
  std::cin.getline(buf, sizeof(buf));
  cout << "[Workflow name] -> " << buf << endl;
}