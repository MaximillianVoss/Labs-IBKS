#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>
long long  m = 4294967296;
long  a = 1664525;
long  c = 1013904223;

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	printf("KGenerator.\n");
	long long x0 = abs(rand());
	for (int i = 0; i < 10000; i++) {
		long long  x = x0;
		x = ((a * x) + c) % m; 
		x0 = x;
		printf("%llu\n", x0);
	}
	system("pause");
	return 0;
}