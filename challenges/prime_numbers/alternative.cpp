#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

int main(int argc, char **argv) {
  bool prime_flag{false};

  for (auto val = 2; val < 100; ++val) {
    prime_flag = true;
    for (auto factor = 2; factor < val; ++factor) {
      if (val % factor == 0) {
        prime_flag = false;
        break;
      }
    }

    if (prime_flag)
      cout << format("{} ", val);
  }
  cout << endl;
}