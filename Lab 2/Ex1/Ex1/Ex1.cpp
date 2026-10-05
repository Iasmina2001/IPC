#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char nume[30];
	int varsta;

	printf("Introduceti numele: ");
	scanf("%s", nume);

	printf("Introduceti varsta: ");
	scanf("%d", &varsta);

	printf("Numele dvs. este: %s\n", nume);
	printf("Varsta dvs. este: %d ani\n", varsta);

	return 0;
}
