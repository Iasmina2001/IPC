#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int numar_i32;

	printf("Introduceti un numar natural de maximum 3 cifre: ");
	scanf("%d", &numar_i32);

	if ((numar_i32 < 0) || (numar_i32 > 999))
	{
		printf("Numarul trebuie sa aiba maxim 3 cifre.\n");
	}
	else if (numar_i32 <= 9)
	{
		printf("Numarul are 1 cifra.\n");
	}
	else if (numar_i32 <= 99)
	{
		printf("Numarul are 2 cifre.\n");
	}
	else
	{
		printf("Numarul are 3 cifre.\n");
	}

	return 0;
}