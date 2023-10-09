#include <math.h>

float calc(float x, float y, float z) {
	return (sqrt(fabs(x - 1)) - pow(y, 0.25)) / (1 + 0.5 * pow(x, 2) + 0.5 * pow(z, 2)) + x * y;
}

float res(float (*func)(float, float, float), float x, float y, float z) {
	return func(x, y, z);
}

int main() {

	float result = res(calc, 1, 3, 5);
	return 0;
}
