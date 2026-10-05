#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, p;
	printf("Introduceti primul nr: ");
	scanf("%d", &a);
	printf("Introduceti cel de-al doilea nr: ");
	scanf("%d", &b);
	p = a * b;
	printf("Produsul celor doua numere este: %d\n", p);
	return 0;
}