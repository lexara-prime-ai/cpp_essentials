#include <cstdint>
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

int main(int argc, char **argv) {
  // An uninitialized array of length 5.
  // int a[5];

  // An initialized array of length 5.
  // All values are initialized with 0 i.e a[0] = 0, i[1] = 0, i[2] = 0 and so
  // on... int a[5] = {};

  // Set value at first index to 1.
  // a[0] = 1;

  // Can also be accessed as though the array was a pointer.
  // *a = 1; // Similar to a[0] = 1;

  int a[]{2, 4, 12, 74, 12};

  for (const int &val : a) {
    cout << format("{} ", val);
  }

  cout << endl;
}