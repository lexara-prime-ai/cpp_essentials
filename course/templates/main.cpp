#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

// Generic - code that works independent of Type.
// C++ TEMPLATES use type identifiers.

template <typename T> T maxof(T a, T b) { return a > b ? a : b; }

int main(int argc, char **argv) {
  int num1{684};
  int num2{76};
  auto result = maxof(num1, num2);
  cout << format("{} is the greatest value.", result) << endl;
}