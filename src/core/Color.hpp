#pragma once
#include "vec.hpp"

class Color {
	public:
		vec4 RGBA;

		Color(vec3 rgb) {
			RGBA.set(rgb.X, rgb.Y, rgb.Z, 1.0f);
		}
		Color(vec4 rgba) {
			RGBA.set(rgba);
		}
};