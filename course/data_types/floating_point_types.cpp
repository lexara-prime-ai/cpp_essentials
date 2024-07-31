#include <cstddef>
#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

// A byte is 8 bits.
const size_t byte{8};

int main(int argc, char **argv) {
  float f{};
  double df{};
  long double ldf{};

  cout << format("Size of [float] is {} bits.", sizeof(f) * byte) << endl;
  cout << format("Size of [double float] is {} bits.", sizeof(df) * byte)
       << endl;
  cout << format("Size of [long double float] is {} bits.", sizeof(ldf) * byte)
       << endl;
}