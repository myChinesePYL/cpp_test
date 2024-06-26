#pragma once
#include <cstdlib>
#include "vec.hpp"
#include "../../options.hpp"

#if defined(_WIN32) || defined(_WIN64)
// Windows
#include <windows.h>

vec2 GetTerminalSize() {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  vec2 size(0, 0);
  GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
  size.X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
  size.Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
  if (size.X > 1024 || size.Y > 1024) {
  	throw "That's so big >_< / 太大啦 >_<";
	}

  return size;
}

#elif defined(__linux__) || defined(__APPLE__)
// Linux or macOS
// Linux 或 macOS
#include <sys/ioctl.h>
#include <unistd.h>

vec2 GetTerminalSize() {
  struct winsize w;
  vec2 size(0, 0);
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
  size.X = w.ws.row;
  size.Y = w.ws_col;
  if (size.X > 1024 || size.Y > 1024) {
  	throw "That's so big >_< / 太大啦 >_<";
	}

  return size;
}
#else
// Other system
// 其他系统
#include <cstdio>
vec2 GetTerminalSize() {
  vec2 size(0,0);
  throw "What is system? / 这是什么系统?";

  return size;
}
#endif