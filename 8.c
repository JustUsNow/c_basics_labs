#include <math.h>

typedef struct {
	float U10;
	float m;
	float Uk[10];
} Ustruct;


Ustruct *ustruct(float Uk[], float m) {
	
	Ustruct *p = malloc(sizeof(Ustruct));
	p->m = m;
	for (int i = 0; i < 10; i++) {
		p->Uk[i] = Uk[i];
	}
	p->U10 = p->Uk[9];
	return p;
}


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
	float m;
	float Uk[10];
	Uk[0] = 0.9;
	Uk[1] = 1;
	
	for (int k = 3; k < 11; k = k + 1) {
		Uk[k - 1] = U(k);
		if (U(k) > m) {
		  m = U(k);
		}
	}
	
	Ustruct *res = ustruct(Uk, m);
	return 0;
}