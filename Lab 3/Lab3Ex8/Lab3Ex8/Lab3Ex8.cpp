#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define IANUARIE 1
#define FEBRUARIE 2
#define MARTIE 3
#define APRILIE 4
#define MAI 5
#define IUNIE 6
#define IULIE 7
#define AUGUST 8
#define SEPTEMBRIE 9
#define OCTOMBRIE 10
#define NOIEMBRIE 11
#define DECEMBRIE 12

int main(void)
{
	int luna_i32;

	printf("Introduceti numarul lunii, intre 1 si 11: ");
	scanf("%d", &luna_i32);

	switch (luna_i32)
	{
		case IANUARIE:
			printf("Februarie\n");
		case FEBRUARIE:
			printf("Martie\n");
		case MARTIE:
			printf("Aprilie\n");
		case APRILIE:
			printf("Mai\n");
		case MAI:
			printf("Iunie\n");
		case IUNIE:
			printf("Iulie\n");
		case IULIE:
			printf("August\n");
		case AUGUST:
			printf("Septembrie\n");
		case SEPTEMBRIE:
			printf("Octombrie\n");
		case OCTOMBRIE:
			printf("Noiembrie\n");
		case NOIEMBRIE:
			printf("Decembrie\n");
			break;
		default:
			printf("Valoare invalida. Introduceti o valoare intre 1 si 11.\n");
	}

	return 0;
}