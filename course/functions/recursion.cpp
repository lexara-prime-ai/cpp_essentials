#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

// unsigned long factorial(unsigned long n) {
//   if (n < 2)
//     return 1;
//   return n * factorial(n - 1);
// }
// Recursion should be avoided for situations h=where a lot of resources are
// required.
// This could easily create [Buffer Overflow] VULNERABILITIES.

unsigned long factorial(unsigned long n) {
  auto result = n;
  while (n > 1) {
    result *= --n;
  }
  return result;
}

int main(int argc, char **argv) {
  unsigned long n{5};
  cout << format("Factorial of {} is {}", n, factorial(n)) << endl;
}