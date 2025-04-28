#include <iostream>

const int64_t MAX_INP = 36;

int main() {
  srand(time(0));
  
  std::cout << rand() % MAX_INP << '\n';
}