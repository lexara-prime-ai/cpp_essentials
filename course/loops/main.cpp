#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

int main(int argc, char **argv) {
  int nums[] = {1, 4, 1, 6, 9};
  int index{0};

  do {
    if (nums[index] == 6) {
      cout << "Exiting.." << endl;
      break;
    }

    cout << format("🦕 Element at index {} is {}.", index, nums[index])
         << endl;
    ++index;
  } while (index < 5);
}