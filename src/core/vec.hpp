class vec {
	public:
		// class vector
		class vec2 {
			public:
				float X,Y;
				
				vec2 (float x, float y) {
					X = x;
					Y = y;
				}
		};
		class vec3 {
			public:
				float X,Y,Z;
				
				vec3 (float x, float y, float z) {
					X = x;
					Y = y;
					Z = z;
				}
		};
		
		// calc function
		static float dot(vec2 A, vec2 B) {
			return A.X * B.X + A.Y * B.Y;
		};
		static float dot(vec3 A, vec3 B) {
			return A.X * B.X + A.Y * B.Y + A.Z * B.Z;
		}
};