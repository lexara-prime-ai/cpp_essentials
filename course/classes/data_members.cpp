#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

class A {
  int ia{};
  int ib{};
  int ic{};

public:
  A(int a, int b, int c) : ia(a), ib(b), ic(c) {}
  void seta(int a) { ia = a; }
  void setb(int b) { ib = b; }
  void setc(int c) { ic = c; }
  int geta() const { return ia; }
  int getb() const { return ib; }
  int getc() const { return ic; }
};

int main(int argc, char **argv) {
  A o1{47, 98, 12};
  cout << format("ia -> {}\nib -> {}\nic -> {}", o1.geta(), o1.getb(),
                 o1.getc())
       << endl;
}