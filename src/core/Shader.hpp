#pragma once
#include <functional>
#include "Buffer.hpp"
#include "GetTerminalSize.hpp"

class Shader {
  private:
  	Shader() {}
  	
    class attribute {
      public:
        vec4 COLOR = {0.0f,0.0f,0.0f,1.0f};
        vec3 UV = {0.0f,0.0f,0.0f};
    };
    void render(attribute) {
    	
		}
  public:
    class VertexShader {
      public:
        VertexShader(std::function<attribute(attribute)> fun) {
					while (true) {
						fun(attribute());
					}
				}
    };
};