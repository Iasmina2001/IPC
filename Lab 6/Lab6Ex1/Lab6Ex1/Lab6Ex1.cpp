#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char cuvant_ac[100];
	int mijloculCuvantului_i32;
	int lungimeaCuvantului_i32;
	bool estePalindrom_b;
	
	printf("Introduceti un cuvant: ");
	scanf("%s", cuvant_ac);

	lungimeaCuvantului_i32 = strlen(cuvant_ac);
	mijloculCuvantului_i32 = lungimeaCuvantului_i32 / 2 - 1;

	estePalindrom_b = true;
	for (int i = 0; i <= mijloculCuvantului_i32; i++)
	{
		if (cuvant_ac[i] != cuvant_ac[lungimeaCuvantului_i32 - 1 - i])
		{
			estePalindrom_b = false;
			break;
		}
	}

	if (true == estePalindrom_b)
	{
		printf("Cuvantul este palindrom\n");
	}
	else
	{
		printf("Cuvantul nu este palindrom\n");
	}

	return 0;
}