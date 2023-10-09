#include <math.h>

float U(int k) {
	
	if (k == 1) {
	  return 0.9;
	} else if (k == 2) {
		return 1;
	} else {
		return sin(k) * U(k - 1) - 0.77 * cos(U(k - 2));
	}
	
}


int main() {
	float m = U(3);
	float mk;
	
	for (int k = 3; k < 11; k = k + 1) {
		if (U(k) > m) {
		  m = U(k);
			mk = k;
		}
	}
	return 0;
}
