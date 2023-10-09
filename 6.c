#include <math.h>

int main() {
	float a[10];
	a[0] = 1;
	a[1] = 2;

	for (int i = 2; i < 10; i = i + 1) {
	  a[i] = a[(i - 1) / 2] + a[i - 2];
	}
	
	//Sorting
	float t;
	int aSize = sizeof(a) / sizeof(a[0]);
	int k = (aSize / 1.247);
	while (k >= 1) {
		for (int i = 0; i + k < aSize; i = i + 1) {
			if (a[i + k] > a[i]) {
				t = a[i + k];
				a[i + k] = a[i];
				a[i] = t;
			}
		}
		k = k / 1.247;
	}
	
	return 0;
}
