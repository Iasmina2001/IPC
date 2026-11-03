#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define LUNGIME_SIR_I32 1000
#define LUNGIME_SUBSIR_I32 200

int main()
{
	int optiune_i32;
	int pozitie_i32;
	int lungime_i32;
	int lungimeSir_i32;
	int lungimeSubsir_i32;
	int lungimePortiune_i32;
	int i_i32;
	int j_i32;
	int k_i32;
	int lungimeCuvantNou_i32;
	char sir_ac[LUNGIME_SIR_I32];
	char subsir_ac[LUNGIME_SUBSIR_I32];
	char rezultat_ac[LUNGIME_SIR_I32];
	char cuvantVechi_ac[LUNGIME_SUBSIR_I32];
	char cuvantNou_ac[LUNGIME_SUBSIR_I32];
	char *aparitie_pc;
	char *inceput_pc;
	char * indexulTextuluiVechi_pc;
	char * aparitiaCuvantuluiVechi_pc;

	do
	{
		printf("\n1. Sterge un subsir\n");
		printf("2. Insereaza un subsir\n");
		printf("3. Inlocuieste toate aparitiile unui cuvant\n");
		printf("0. Iesire\n");
		printf("Optiune: ");
		scanf("%d", &optiune_i32);
		getchar();    /* Sare peste caracterul enter */

		switch (optiune_i32)
		{
		case 1:
			printf("Introduceti sirul: ");
			fgets(sir_ac, LUNGIME_SIR_I32, stdin);
			sir_ac[strlen(sir_ac) - 1] = '\0';

			printf("Pozitia de la care se sterge: ");
			scanf("%d", &pozitie_i32);

			printf("Numarul de caractere sterse: ");
			scanf("%d", &lungime_i32);

			lungimeSir_i32 = strlen(sir_ac);

			if ((pozitie_i32 < 0) || (pozitie_i32 >= lungimeSir_i32) || (lungime_i32 < 0))
			{
				printf("Pozitie sau lungime invalida.\n");
			}
			else
			{
				if ((pozitie_i32 + lungime_i32) > lungimeSir_i32)
				{
					lungime_i32 = lungimeSir_i32 - pozitie_i32;
				}

				for (i_i32 = pozitie_i32; i_i32 <= lungimeSir_i32 - lungime_i32; i_i32++)
				{
					sir_ac[i_i32] = sir_ac[i_i32 + lungime_i32];
				}

				printf("Rezultat: %s\n", sir_ac);
			}
			break;

		case 2:
			printf("Introduceti sirul initial: ");
			fgets(sir_ac, LUNGIME_SIR_I32, stdin);
			sir_ac[strlen(sir_ac) - 1] = '\0';

			printf("Introduceti subsirul: ");
			fgets(subsir_ac, LUNGIME_SUBSIR_I32, stdin);
			subsir_ac[strlen(subsir_ac) - 1] = '\0';

			printf("Pozitia de inserare: ");
			scanf("%d", &pozitie_i32);

			lungimeSir_i32 = strlen(sir_ac);
			lungimeSubsir_i32 = strlen(subsir_ac);

			if ((pozitie_i32 < 0) || (pozitie_i32 > lungimeSir_i32))
			{
				printf("Pozitie invalida.\n");
			}
			else if (lungimeSir_i32 + lungimeSubsir_i32 >= LUNGIME_SIR_I32)
			{
				printf("Rezultatul este prea lung.\n");
			}
			else
			{
				k_i32 = 0;

				for (i_i32 = 0; i_i32 < pozitie_i32; i_i32++)
				{
					rezultat_ac[k_i32++] = sir_ac[i_i32];
				}

				for (j_i32 = 0; j_i32 < lungimeSubsir_i32; j_i32++)
				{
					rezultat_ac[k_i32++] = subsir_ac[j_i32];
				}

				for (i_i32 = pozitie_i32; i_i32 <= lungimeSir_i32; i_i32++)
				{
					rezultat_ac[k_i32++] = sir_ac[i_i32];
				}

				strcpy(sir_ac, rezultat_ac);

				printf("Rezultat: %s\n", sir_ac);
			}
			break;

		case 3:
			printf("Introduceti textul: ");
			fgets(sir_ac, LUNGIME_SIR_I32, stdin);
			sir_ac[strlen(sir_ac) - 1] = '\0';

			printf("Cuvantul vechi: ");
			scanf("%s", cuvantVechi_ac);

			printf("Cuvantul nou: ");
			scanf("%s", cuvantNou_ac);

			if (strlen(cuvantVechi_ac) == 0)
			{
				printf("Cuvantul vechi nu poate fi gol.\n");
				break;
			}

			lungimeCuvantNou_i32 = strlen(cuvantNou_ac);

			k_i32 = 0;
			indexulTextuluiVechi_pc = sir_ac;

			/* Cautam prima aparitie a cuvantului vechi. */
			aparitiaCuvantuluiVechi_pc = strstr(indexulTextuluiVechi_pc, cuvantVechi_ac);

			while (aparitiaCuvantuluiVechi_pc != NULL)
			{
				/* Copiem caracter cu caracter portiunea aflata inaintea cuvantului gasit. */
				while (indexulTextuluiVechi_pc < aparitiaCuvantuluiVechi_pc)
				{
					if (k_i32 < LUNGIME_SIR_I32 - 1)
					{
						rezultat_ac[k_i32] = *indexulTextuluiVechi_pc;
						k_i32++;
					}

					indexulTextuluiVechi_pc++;
				}

				/* Copiem cuvantul nou caracter cu caracter. */
				for (i_i32 = 0; i_i32 < lungimeCuvantNou_i32; i_i32++)
				{
					if (k_i32 < LUNGIME_SIR_I32 - 1)
					{
						rezultat_ac[k_i32] = cuvantNou_ac[i_i32];
						k_i32++;
					}
				}

				/* Trecem peste cuvantul vechi. */
				indexulTextuluiVechi_pc = aparitiaCuvantuluiVechi_pc + strlen(cuvantVechi_ac);

				/* Cautam urmatoarea aparitie. */
				aparitiaCuvantuluiVechi_pc = strstr(indexulTextuluiVechi_pc, cuvantVechi_ac);
			}

			/* Copiem caracterele ramase dupa ultima aparitie. */
			while (*indexulTextuluiVechi_pc != '\0')
			{
				if (k_i32 < LUNGIME_SIR_I32 - 1)
				{
					rezultat_ac[k_i32] = *indexulTextuluiVechi_pc;
					k_i32++;
				}

				indexulTextuluiVechi_pc++;
			}

			/* Adaugam terminatorul de sir. */
			rezultat_ac[k_i32] = '\0';

			strcpy(sir_ac, rezultat_ac);
			printf("Rezultat: %s\n", sir_ac);
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