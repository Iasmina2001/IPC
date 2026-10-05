#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a;
	printf("Introduceri un numar intreg: ");
	scanf("%d", &a);
	printf("Numarul este par (0-FALS, 1-ADEVARAT): %d\n", (0 == (a % 2)));
	return 0;
}