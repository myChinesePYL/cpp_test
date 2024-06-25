#pragma once

class vec2 {
	public:
		float X;
		float Y;

		vec2() {
			X = Y = 0;
		}
		vec2(float x, float y) {
			X = x;
			Y = y;
		}

		void set(vec2 A) {
			X = A.X;
			Y = A.Y;
		}
		void set(float x, float y) {
			X = x;
			Y = y;
		}
};
class vec3 {
	public:
		float X;
		float Y;
		float Z;

		vec3() {
			X = Y = Z = 0;
		}
		vec3(float x,float y,float z) {
			X = x;
			Y = y;
			Z = z;
		}

		void set(vec3 A) {
			X = A.X;
			Y = A.Y;
			Z = A.Z;
		}
		void set(float x,float y,float z) {
			X = x;
			Y = y;
			Z = z;
		}
};
class vec4 {
	public:
		float X;
		float Y;
		float Z;
		float W;

		vec4() {
			X = Y = Z = W = 0;
		}
		vec4(float x,float y,float z, float w) {
			X = x;
			Y = y;
			Z = z;
			W = w;
		}

		void set(vec4 A) {
			X = A.X;
			Y = A.Y;
			Z = A.Z;
			W = A.W;
		}
		void set(float x,float y,float z, float w) {
			X = x;
			Y = y;
			Z = z;
			W = w;
		}
};

// vec tools

class vec {
	public:
		// calc dot
		static float dot(vec2 A, vec2 B) {
			return A.X * B.X + A.Y * B.Y;
		}
		static float dot(vec3 A, vec3 B) {
			return A.X * B.X + A.Y * B.Y + A.Z * B.Z;
		}
};