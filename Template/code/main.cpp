#include <iostream>

int main() {
  int64_t power;
  std::cin >> power;
  std::cerr << "!" << power << '\n';
  std::cout << (1 << power);
}