#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int numar_i32;
	int cifraZecilor_i32;
	int cifraUnitatilor_i32;

	printf("Introduceti un numar natural de maximum 2 cifre: ");
	scanf("%d", &numar_i32);

	if ((numar_i32 < 0) || (numar_i32 > 99))
	{
		printf("Numarul trebuie sa aiba maxim doua cifre.\n");
	}
	else if (numar_i32 <= 15)
	{
		printf("Patratul numarului este: %d\n", numar_i32 * numar_i32);
	}
	else if (numar_i32 <= 30)
	{
		cifraZecilor_i32 = numar_i32 / 10;
		cifraUnitatilor_i32 = numar_i32 % 10;

		printf("Suma cifrelor este: %d\n", cifraZecilor_i32 + cifraUnitatilor_i32);
	}
	else
	{
		cifraZecilor_i32 = numar_i32 / 10;
		cifraUnitatilor_i32 = numar_i32 % 10;

		printf("Produsul cifrelor este: %d\n", cifraZecilor_i32 * cifraUnitatilor_i32);
	}

	return 0;
}