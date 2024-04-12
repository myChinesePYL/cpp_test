#include <cstdio>
#include "./modules/ANSIControl.cpp"

int main() {
  ansic::SaveScreen();
  char *temp;
  std::printf("Please enter: ");
  std::scanf("%s", temp);
  std::printf("^[[A");
  ansic::ReverseScreen();

  return 0;
}