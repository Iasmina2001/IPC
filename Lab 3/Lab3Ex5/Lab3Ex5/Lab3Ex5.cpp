#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int numar_i32;
	int sute_i32;
	int zeci_i32;
	int unitati_i32;
	int contor_i32 = 0;

	printf("Introduceti un numar natural de 3 cifre: ");
	scanf("%d", &numar_i32);

	if ((numar_i32 < 100) || (numar_i32 > 999))
	{
		printf("Numarul trebuie sa fie de 3 cifre.\n");
	}
	else
	{
		sute_i32 = numar_i32 / 100;
		zeci_i32 = (numar_i32 / 10) % 10;
		unitati_i32 = numar_i32 % 10;

		if (sute_i32 % 2 != 0)
		{
			contor_i32++;
		}

		if (zeci_i32 % 2 != 0)
		{
			contor_i32++;
		}

		if (unitati_i32 % 2 != 0)
		{
			contor_i32++;
		}

		printf("Numarul contine %d cifre impare.\n", contor_i32);
	}

	return 0;
}