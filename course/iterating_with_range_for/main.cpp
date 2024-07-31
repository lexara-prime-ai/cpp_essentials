#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

int main() {
  int nums[] = {21, 5, 82, 63, 1, 2};

  for (const auto &e : nums) {
    cout << format("Element is {}", e) << endl;

    if (e + 6 == 69) {
      cout << format("\n{} + 6 = {}\n -> Nice!\n", e, (e + 6)) << endl;
    }
  }
}