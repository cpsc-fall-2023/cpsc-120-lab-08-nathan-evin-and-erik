// Nathaniel Rommel Hidalgo
// nhidalgo29@csu.fullerton.edu
// @nhidalgo29
// Partners: @EvinMuniz, @glow-whale

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number"
              << "\n";
    return 1;
  }
  double sum = 0.0;
  double average = 0.0;
  for (const std::string& arg : arguments) {
    if (arg == arguments.at(0)) {
      continue;
    }
    sum = sum + std::stod(arg);
  }
  average = sum / static_cast<double>(arguments.size() - 1);
  std::cout << "average = " << average;

  return 0;
}