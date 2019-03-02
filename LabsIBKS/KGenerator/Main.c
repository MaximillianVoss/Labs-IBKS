#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>

long long * Generate(size_t n) {
	long long * items = (long long*)malloc(sizeof(long long)*n);
	long long m = 4294967296;
	long long a = 1664525;
	long long c = 1013904223;
	long long x0 = rand();
	for (size_t i = 0; i < n; i++) {
		long long  x = x0;
		x = ((a * x) + c) % m;
		x0 = x;
		items[i] = x0;
	}
	return items;
}

void Print(long long *a, size_t n) {
	for (size_t i = 0; i < n; i++) {
		printf("%llu\n", a[i]);
	}
}

int GetPeriod(long long *a, size_t n) {
	
}

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	printf("KGenerator.\n");
	int n = 100;
	long long * items = Generate(n);

	system("pause");
	return 0;
}