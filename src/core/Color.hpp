#pragma once
#include "vec.hpp"

class Color {
	public:
		vec3 RGB;

		Color(vec3 rgb) {
			RGB.set(rgb);
		}
};