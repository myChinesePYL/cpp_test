#pragma once
#include "vec.hpp"

class Color {
  public:
    vec4 RGBA;

		Color() {
			RGBA.set(0.0f,0.0f,0.0f,1.0f);
		}
    Color(vec3 rgb) {
      RGBA.set(rgb.X, rgb.Y, rgb.Z, 1.0f);
    }
    Color(vec4 rgba) {
      RGBA.set(rgba);
    }
};