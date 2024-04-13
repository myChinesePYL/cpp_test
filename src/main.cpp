#include <climits>
#include <cstdio>
#include "./modules/ANSIControl.cpp"

int main() {
  ansic::SaveScreen();
  ansic::ClearScreen();
  ansic::SetCursorTo(0, 0);
  char text[CHAR_MAX];
  char isOne[CHAR_MAX];
  std::printf("请输入一些文字并回车: ");
  std::fgets(text, sizeof(text), stdin);
  if (std::strlen(text) >= CHAR_MAX - 1) {
    ansic::ReverseScreen();
    std::printf(">_< 输入的字符太大啦\n");
    return 1;
  }

  ansic::ClearScreen();
  ansic::SetCursorTo(0, 0);
  std::printf("你确定你输入的是这个吗?: %s请输入1或0: ", text);

  std::fgets(isOne, sizeof(isOne), stdin);
  ansic::ReverseScreen();
  if (std::strlen(isOne) >= 3 || (std::strcmp(isOne, "0\n") && std::strcmp(isOne, "1\n")) == 1) {
    std::printf("让你输入1或0, 你看看你输入了什么!\n");
    return 1;
  };
  if (std::strcmp(isOne, "1\n") == 0) {
    std::printf("好的\n");
  } else {
    std::printf("......, 油饼\n");
  };

  return 0;
}