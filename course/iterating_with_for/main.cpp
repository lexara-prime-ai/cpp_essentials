#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

int main() {
  const char input[] = {"Chevapravadumrong"};

  // Alternatively.
  for (auto *p = input; *p; ++p) {
    cout << format("Char is {}", *p) << endl;
  }
}