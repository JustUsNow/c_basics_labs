#include <math.h>

int main() {
	float a[10];
	a[0] = 1;
	a[1] = 2;

	for (int i = 2; i < 10; i = i + 1) {
	  a[i] = a[(i - 1) / 2] + a[i - 2];
	}
	
	float Z[4][5] = {{1, 2, 3, 4, 5}, {0, 2, 4, 6, 8}, {0, -2, -4, -6, -8}, {6, 7, 8, 9, 0}};
	float B[20];
	float t;
	
	for (int i = 0; i < 4; i = i + 1) {
		if (Z[i][0] == 0.0) {
		  for (int j = 0; j < 2; j = j + 1) {
				t = Z[i][j];
				Z[i][j] = Z[i][4 - j];
				Z[i][4 - j] = t;
			}
		}
	}
	
	int k = 0;
	for (int i = 0; i < 4; i = i + 1) {
		for (int j = 0; j < 5; j = j + 1) {
			if (Z[i][j] < 0) {
				B[k] = Z[i][j];
				k = k + 1;
			}
		}
	}
	
	return 0;
}
