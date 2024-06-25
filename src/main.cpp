#include "core/Color.hpp"
#include "core/vec.hpp"
#include <cstdio>

int main() {
	vec::vec2 A(1.0f, 1.0f);
	vec::vec2 B(1.0f, -1.0f);
	printf("%f\n", vec::dot(A, B));
	
	return 0;
}