#include <iostream>
#include <math.h>

int main() {
  int64_t power;
  std::cin >> power;
  int64_t ans = 1;
  while (power > 0) {
    ans *= 2;
    std::cerr << "!" << ans << '\n';
    --power;
  }
  std::cout << ans;
}