#include <math.h>

int main() {
	float x = 1.0;
	float y = 3.0;
	float z = 5.0;
	
	double d = (sqrt(fabs(x - 1)) - pow(y, 0.25)) / (1 + 0.5 * pow(x, 2) + 0.5 * pow(z, 2)) + x * y;
	return 0;
}
