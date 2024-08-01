#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

template <typename T> T factorial(T n) {
  T result = n;
  while (n > 1) {
    result *= --n;
  }
  return result;
}

int main(int argc, char **argv) {
  unsigned long n{5};
  cout << format("Factorial of {} is {}", n, factorial(n)) << endl;
}