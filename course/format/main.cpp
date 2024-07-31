#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>
#include <ostream>

using fmt::format;
using std::cout;

int main(int argc, char **argv) {
  int clientPort{4747};
  int hostPort{48};
  int *portAddr = &clientPort;
  int &forwardedPort = clientPort;

  cout << "\n__[DEFAULT] Configuration__" << std::endl;
  cout << format("[CLIENT]::[PORT] -> {}", clientPort);
  cout << format("\n[HOST]::[PORT] -> {}", hostPort);
  cout << format("\n[PORT]::[ADDR] -> {}", *portAddr);
  cout << format("\n[FORWARD]::[ADDR] -> {}\n", forwardedPort);

  // Update clientPort.
  clientPort = 20;
  portAddr = &hostPort;
  forwardedPort = 5454;

  cout << "\nUpdating [DEFAULT] Configuration..." << std::endl;
  cout << format("\n[CLIENT]::[PORT] -> {}", clientPort);
  cout << format("\n[PORT]::[ADDR] -> {}", *portAddr);
  cout << format("\n[FORWARD]::[ADDR] -> {}\n", forwardedPort);
}