#include <future>
#include <iostream>

int tps = 0;

void getTPS() {
  int startTime = std::time(nullptr);
  tps = 0;
  void(std::async([&] {
    while (std::time(nullptr) - startTime < 1) {
      tps++;
    }

    std::cout << "\rC++ TPS: " << tps;
  }));

};

int main() {
  getTPS();
  std::cout << std::endl;
}