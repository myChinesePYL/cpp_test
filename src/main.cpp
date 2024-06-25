#include "core/Color.hpp"
#include "core/vec.hpp"
#include "../options.hpp"
#include <cstdio>
#include "core/GetTerminalSize.hpp"

int main() {
#if OPTION_DEBUG
	vec2 size = GetTerminalSize();
	printf("Width: %f\nHeight: %f\n", size.X, size.Y);
#endif

	return 0;
}