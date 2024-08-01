#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

// class C1 {
//   int c1val{};

// public:
//   void setValue(int value) { c1val = value; }
//   int getValue() { return c1val; }
// };

// Alternatively.
// This interface may be in a header file and the following implementation in 
// a separate implementation file.
class C1 {
  int c1val{};

public:
  void setValue(int value);
  int getValue();
};

// The method definitions can be made outside the class
// using the scope(::) operator.
void C1::setValue(int value) { c1val = value; }
int C1::getValue() { return c1val; }

int main() {
  C1 o1;
  o1.setValue(68);
  cout << format("Value is {}", o1.getValue()) << endl;
}