#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int numar_i32;
	int cifraSutelor_i32;
	int cifraZecilor_i32;
	int cifraUnitatilor_i32;
	int cifraMijloc_i32;

	printf("Introduceti un numar natural de 3 cifre distincte: ");
	scanf("%d", &numar_i32);

	if ((numar_i32 < 100) || (numar_i32 > 999))
	{
		printf("Numarul trebuie sa fie de 3 cifre.\n");
	}
	else
	{
		cifraSutelor_i32 = numar_i32 / 100;
		cifraZecilor_i32 = (numar_i32 / 10) % 10;
		cifraUnitatilor_i32 = numar_i32 % 10;

		if ((cifraSutelor_i32 == cifraZecilor_i32) ||
			(cifraSutelor_i32 == cifraUnitatilor_i32) ||
			(cifraZecilor_i32 == cifraUnitatilor_i32))
		{
			printf("Cifrele nu sunt distincte.\n");
		}
		else
		{
			if (((cifraSutelor_i32 > cifraZecilor_i32) && (cifraSutelor_i32 < cifraUnitatilor_i32)) ||
				((cifraSutelor_i32 < cifraZecilor_i32) && (cifraSutelor_i32 > cifraUnitatilor_i32)))
			{
				cifraMijloc_i32 = cifraSutelor_i32;
			}
			else if (((cifraZecilor_i32 > cifraSutelor_i32) && (cifraZecilor_i32 < cifraUnitatilor_i32)) ||
				     ((cifraZecilor_i32 < cifraSutelor_i32) && (cifraZecilor_i32 > cifraUnitatilor_i32)))
			{
				cifraMijloc_i32 = cifraZecilor_i32;
			}
			else
			{
				cifraMijloc_i32 = cifraUnitatilor_i32;
			}

			printf("Cifra din mijloc ca valoare este: %d\n", cifraMijloc_i32);
		}
	}

	return 0;
}