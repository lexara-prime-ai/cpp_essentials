#include <cstdint>
#include <cstring>
#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>
#include <ostream>

using fmt::format;
using std::cout;
using std::endl;
using std::memset;

int main(int arc, char **argv) {
  auto input{100};
  bool prime[input + 1];
  memset(prime, true, sizeof(prime));

  for (int val = 2; val * val <= input; ++val) {
    if (prime[val] == true) {
      for (int index = val * val; index <= input; index += val)
        prime[index] = false;
    }
  }

  for (int val = 2; val <= input; ++val) {
    if (prime[val])
      cout << format("{} ", val);
  }
  cout << endl;
}