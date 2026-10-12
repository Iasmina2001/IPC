#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int numar;

	printf("Introduceti un numar intreg: ");
	scanf("%d", &numar);

	if (numar % 2 == 0)
	{
		printf("Numarul este par.\n");
	}
	else
	{
		printf("Numarul este impar.\n");
	}

	return 0;
}