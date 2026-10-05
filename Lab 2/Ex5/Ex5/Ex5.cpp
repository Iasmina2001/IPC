#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a;
	printf("Introduceti o valoare intreaga: ");
	scanf("%d", &a);
	printf("Cifra unitarilor numarului intreg: %d", a % 10);

	return 0;
}