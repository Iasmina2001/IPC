#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NR_MAX_CUVINTE_I32 (int)100
#define MAX_LUNGIME_CUVANT_I32 (int)100

int main()
{
	char cuvinte_aac[NR_MAX_CUVINTE_I32][MAX_LUNGIME_CUVANT_I32];
	char cuvant_ac[MAX_LUNGIME_CUVANT_I32];
	int n_i32 = 0;
	int optiune_i32;
	int i_i32;
	int pozitie_i32;

	do
	{
		printf("\n1. Adauga un cuvant\n");
		printf("2. Afiseaza toate cuvintele\n");
		printf("3. Sterge un cuvant\n");
		printf("4. Cauta un cuvant\n");
		printf("0. Iesire\n");
		printf("Optiune: ");
		scanf("%d", &optiune_i32);

		switch (optiune_i32)
		{
		case 1:
			if (n_i32 == NR_MAX_CUVINTE_I32)
			{
				printf("Lista este plina.\n");
				break;
			}

			printf("Cuvant: ");
			scanf("%s", cuvant_ac);

			if (cuvant_ac[0] < 'A' || cuvant_ac[0] > 'Z')
			{
				printf("Cuvantul nu poate fi adaugat in lista, deoarece nu incepe cu litera mare.\n");
			}
			else
			{
				strcpy(cuvinte_aac[n_i32], cuvant_ac);
				n_i32++;
				printf("Cuvant adaugat in lista.\n");
			}
			break;

		case 2:
			if (n_i32 == 0)
			{
				printf("Lista este goala.\n");
			}
			else
			{
				for (i_i32 = 0; i_i32 < n_i32; i_i32++)
				{
					printf("%d. %s\n", i_i32, cuvinte_aac[i_i32]);
				}
			}
			break;

		case 3:
			printf("Cuvantul de sters: ");
			scanf("%s", cuvant_ac);

			pozitie_i32 = -1;

			for (i_i32 = 0; i_i32 < n_i32; i_i32++)
			{
				if (strcmp(cuvinte_aac[i_i32], cuvant_ac) == 0)
				{
					pozitie_i32 = i_i32;
					break;
				}
			}

			if (pozitie_i32 == -1)
			{
				printf("Cuvantul nu exista.\n");
			}
			else
			{
				for (i_i32 = pozitie_i32; i_i32 < n_i32 - 1; i_i32++)
				{
					strcpy(cuvinte_aac[i_i32], cuvinte_aac[i_i32 + 1]);
				}

				n_i32--;
				printf("Cuvant sters.\n");
			}
			break;

		case 4:
			printf("Cuvantul cautat: ");
			scanf("%s", cuvant_ac);

			pozitie_i32 = -1;

			for (i_i32 = 0; i_i32 < n_i32; i_i32++)
			{
				if (strcmp(cuvinte_aac[i_i32], cuvant_ac) == 0)
				{
					pozitie_i32 = i_i32;
					break;
				}
			}

			if (pozitie_i32 == -1)
			{
				printf("Cuvantul nu exista in lista.\n");
			}
			else
			{
				printf("Cuvantul exista la indexul %d.\n", pozitie_i32);
			}
			break;

		case 0:
			printf("Program incheiat.\n");
			break;

		default:
			printf("Optiune invalida.\n");
		}
	} while (optiune_i32 != 0);

	return 0;
}