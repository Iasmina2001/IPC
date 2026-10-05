#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("Introduceti primul numar: ");
	scanf("%d", &a);
	printf("Introduceti al doilea numar: ");
	scanf("%d", &b);
	printf("a mod 2 + b mod 2 = %d", (a % 2) + (b % 2));
	return 0;
}