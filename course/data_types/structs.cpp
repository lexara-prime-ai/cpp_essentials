#include <cstdint>
#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

struct S {
  int i{};
  double d{};
  const char *s{};
};

int main(int argc, char **argv) {
  S s1 = {63, 47.4, "Some string"};
  auto *sp = &s1;
  sp->d = 65.0; // -> accesses a member through a pointer.

  // We can use dot(.) notation i.e s1.i, s1.d ... to access members of a struct
  // or the -> pointer i.e sp->i, sp->d ... memeber dereference operator.
  cout << format("s1: {}, {}, {}", sp->i, sp->d, sp->s) << endl;
}