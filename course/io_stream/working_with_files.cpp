#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
  static int lineno{};
  static const char *filename{"./sample.txt"};
  static const char *textstring{"1,John Doe,johndoe@example.com,28,USA"};

  std::cout << "Writing file..." << std::endl;
  std::ofstream ofile(filename);
  ofile << ++lineno << " " << textstring << '\n';
  ofile << ++lineno << " " << textstring << '\n';
  ofile << ++lineno << " " << textstring << '\n';
  ofile.close();

  static char buf[1024];
  std::cout << "Reading file..." << std::endl;
  std::ifstream infile(filename);
  while (infile.good()) {
    infile.getline(buf, sizeof(buf));
    std::cout << buf << '\n';
  }
  infile.close();

  //   std::cout << "Deleting file..." << std::endl;
  //   remove(filename);
}