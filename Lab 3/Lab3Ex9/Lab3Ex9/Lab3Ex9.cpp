#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x_fl32;
	float y_fl32;
	char operatie_c;

	printf("Introduceti doua numere:\n");
	printf("x = ");
	scanf("%f", &x_fl32);
	printf("y = ");
	scanf("%f", &y_fl32);

	printf("\nMeniu de operatii\n");
	printf("a - Adunare\n");
	printf("b - Scadere\n");
	printf("c - Inmultire\n");
	printf("d - Impartire\n");
	printf("Introduceti tipul operatiei: ");

	scanf(" %c", &operatie_c);

	switch (operatie_c)
	{
	case 'a':
	case 'A':
		printf("Rezultatul este: %.2lf\n", x_fl32 + y_fl32);
		break;

	case 'b':
	case 'B':
		printf("Rezultatul este: %.2lf\n", x_fl32 - y_fl32);
		break;

	case 'c':
	case 'C':
		printf("Rezultatul este: %.2lf\n", x_fl32 * y_fl32);
		break;

	case 'd':
	case 'D':
		if (y_fl32 != 0)
		{
			printf("Rezultatul este: %.2lf\n", x_fl32 / y_fl32);
		}
		else
		{
			printf("Eroare: impartirea la zero nu este permisa.\n");
		}
		break;

	default:
		printf("Optiune invalida.\n");
	}

	return 0;
}