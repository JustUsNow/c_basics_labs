#include <math.h>

int main() {
	float x = 1.0;
	float y = 0;
	float a;
	
	if (x * y > 0) {
		a = pow(x + y, 2) - sqrt(x * y);
	}
	if (x * y < 0) {
		a = pow(x + y, 2) + sqrt(fabs(x * y));
	}
	if (y == 0.0) {
		a = pow(x + y, 2) + 1;
	}
	return 0;
}
