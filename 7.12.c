#include <math.h>
#include <stdarg.h>

int ArgsSum(int n, ...) {
	va_list format;
	va_start(format, n);
	int result = 0;
	for (int i = 0; i < n; i++) {
		result += va_arg(format, int);
	}
	va_end(format);
	return result;
}


int ArrSum(int arrSize, int arr[]) {
	int result = 0;
	for (int i = 0; i < arrSize; i++) {
		result += arr[i];
	}
	return result;
}


int main() {

	int a[10];
	a[0] = 1;
	a[1] = 2;

	for (int i = 2; i < 10; i = i + 1) {
	  a[i] = a[(i - 1) / 2] + a[i - 2];
	}
	
	int argsSum = ArgsSum(10, 1, 2, 2, 4, 4, 6, 6, 10, 10, 14);
	int arrSum = ArrSum(10, a);
	return 0;
}