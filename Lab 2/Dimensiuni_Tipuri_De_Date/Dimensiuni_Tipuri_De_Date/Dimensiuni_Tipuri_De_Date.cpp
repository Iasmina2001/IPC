#include <stdio.h>

#define NUMAR_DE_BITI_INTR_UN_OCTET 8

enum Exemplu {
	A = 0,
	B = 1,
	C = 2
};

int main(void) {
	printf("unsigned char: %d biti\n", sizeof(unsigned char) * NUMAR_DE_BITI_INTR_UN_OCTET);
	printf("char:          %d biti\n", sizeof(char) * NUMAR_DE_BITI_INTR_UN_OCTET);
	printf("enum:          %d biti\n", sizeof(enum Exemplu) * NUMAR_DE_BITI_INTR_UN_OCTET);
	printf("unsigned int:  %d biti\n", sizeof(unsigned int) * NUMAR_DE_BITI_INTR_UN_OCTET);
	printf("short int:     %d biti\n", sizeof(short int) * NUMAR_DE_BITI_INTR_UN_OCTET);
	printf("int:           %d biti\n", sizeof(int) * NUMAR_DE_BITI_INTR_UN_OCTET);
	printf("unsigned long: %d biti\n", sizeof(unsigned long) * NUMAR_DE_BITI_INTR_UN_OCTET);
	printf("long:          %d biti\n", sizeof(long) * NUMAR_DE_BITI_INTR_UN_OCTET);
	printf("float:         %d biti\n", sizeof(float) * NUMAR_DE_BITI_INTR_UN_OCTET);
	printf("double:        %d biti\n", sizeof(double) * NUMAR_DE_BITI_INTR_UN_OCTET);
	printf("long double:   %d biti\n", sizeof(long double) * NUMAR_DE_BITI_INTR_UN_OCTET);

	return 0;
}