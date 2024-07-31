#include "fmt/format.h"
#include <cstring>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

int main() {
  auto name = "John";

  auto result =
      (strcmp(name, "Marco") == 0 ? "Polo!" : "Nothing to see here...");
  cout << result << endl;
}