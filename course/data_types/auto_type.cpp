#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>
#include <vector>

using fmt::format;
using std::cout;
using std::endl;

int main() {
  std::string s{"Evengelion is, interesting."};
  auto x = s;
  cout << format("x is {}", x) << endl;
  cout << format("Type of x is {}", typeid(x).name()) << endl;

  cout << endl;

  // Example with iterators.
  std::vector<int> vi{2, 23, 9, 67};

//   for (std::vector<int>::iterator it = vi.begin(); it != vi.end(); ++it) {
//     cout << format("int is {}", *it) << endl;
//     cout << format("type of it is {}", typeid(it).name()) << endl;
//   }

  // Alternatively.
  for (auto it = vi.begin(); it != vi.end(); ++it) {
    cout << format("int is {}", *it) << endl;
    cout << format("type of it is {}", typeid(it).name()) << endl;
  }
}