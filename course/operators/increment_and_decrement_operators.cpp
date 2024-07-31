#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

int main(int argc, char **argv) {
  auto val = 63;

  cout << endl << "Increment(++) :: as prefix." << endl;
  cout << format("V is {}", ++val) << endl;
  cout << format("V is {}", ++val) << endl;
  cout << format("V is {}", ++val) << endl;

  val = 63;

  cout << endl << "Increment(++) :: as suffix." << endl;
  cout << format("V is {}", val++) << endl;
  cout << format("V is {}", val++) << endl;
  cout << format("V is {}", val++) << endl;
}
