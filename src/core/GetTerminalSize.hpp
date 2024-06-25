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

	return size;
}

#elif defined(__linux__) || defined(__APPLE__)
// Linux or macOS
#include <sys/ioctl.h>
#include <unistd.h>

vec2 GetTerminalSize() {
	struct winsize w;
	vec2 size(0, 0);
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	size.X = w.ws.row;
	size.Y = w.ws_col;

	return size;
}
#else
// Other System
#include <cstdio>
vec2 GetTerminalSize() {
	vec2 size(0,0);
#if OPTIONS_DEBUG
	printf("What is system?");
#endif

	return size;
}
#endif