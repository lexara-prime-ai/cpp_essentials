#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>
#include <vector>

using fmt::format;
using std::cout;
using std::endl;

int func() {
  static int num{63};
  return ++num;
}

int main(int argc, char **argv) {
  int num = 36;
  cout << format("[main] -> Output :: {}", num) << endl;
  cout << format("[func] -> Output :: {}", func()) << endl;
  cout << format("[func] -> Output :: {}", func()) << endl;
  cout << format("[func] -> Output :: {}", func()) << endl;
}