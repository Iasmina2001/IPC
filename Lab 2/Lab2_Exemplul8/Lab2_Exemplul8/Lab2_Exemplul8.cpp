#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main(void)
{
	float a, b, c;
	printf("Introduceti primul nr: ");
	scanf("%f", &a);
	printf("Introduceti cel de - al doilea nr: ");
	scanf("%f", &b);
	c = a + b;
	printf("Suma celor doua numere este %f ", c);
	_getch();
	return 0;
}