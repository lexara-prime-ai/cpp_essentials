#include <cstdint>
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;
using std::endl;

// Aliasing unsigned integers of a specific size.
// Defined in [cstdint].
// typedef uint32_t points_t;
// typedef uint64_t rank_t;

// Alternatively.
using points_t = uint32_t;
using rank_t = uint64_t;

struct score {
  points_t p{};
  rank_t r{};
};

int main(int argc, char **argv) {
  score s{5, 1};
  cout << format("Score s had {} points and a rank of {}.", s.p, s.r) << endl;
}