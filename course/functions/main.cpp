#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

void func(bool status, const char *username) {
  cout << format("\n[USERNAME] -> {}\n[ACCOUNT STATUS] -> {}", username, status)
       << endl;
}

int main() {
  cout << "Calling main()" << endl;
  func(true, "johndoe");
}