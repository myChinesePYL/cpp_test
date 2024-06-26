#pragma once
#include <functional>
#include <thread>

class Shader {
  private:
    class attribute {
      private:
        attribute() {}
      public:
        vec4 COLOR = {0.0f,0.0f,0.0f,1.0f};
        vec3 UV = {0.0f,0.0f,0.0f};
    };
  public:
    class VertexShader {
      public:
        VertexShader(std::function<attribute(attribute)> fun) {
					//
				}
    };
};