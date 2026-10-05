#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, aux;
	printf("Introduceti primul numar: ");
	scanf("%d", &a);
	printf("Introduceti al doilea numar: ");
	scanf("%d", &b);
	printf("a + b = %d\n", a + b);
	printf("a * b = %d\n", a * b);
	printf("a - b = %d\n", a - b);
	aux = a;
	a = b;
	b = aux;
	printf("swap(a, b) -> a = %d, b = %d\n", a, b);
	return 0;
}