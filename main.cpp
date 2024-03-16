#include <iostream>

int main() {
  for(int i = 0; i < 10; i++){
    std::cout << std::string(i, 'm') << std::endl;
  }

  return 0;
}