#include "core/Color.hpp"
#include "core/vec.hpp"
#include "../options.hpp"
#include <cstdio>

int main() {
	#if OPTION_DEBUG
	vec2 A(1.0f, 1.0f);
	vec2 B(-1.0f, -1.0f);
	printf("%f\n", vec::dot(A, B));
	#endif
	
	return 0;
}