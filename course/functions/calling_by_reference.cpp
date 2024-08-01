#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

void func(int *p) { ++*p; }

int main(int argc, char **argv) {
  int a{96};
  cout << format("Value is {}", a) << endl;
  func(&a);
  cout << format("Value is {}", a) << endl;
}