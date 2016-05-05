#include <iostream>
#include <vector>

int main() {
  std::vector<int> foo = {1, 2, 3};
  for (int i = 0; i <= 3; i++) {
    std::cout << foo[i] << std::endl;
  }
}
