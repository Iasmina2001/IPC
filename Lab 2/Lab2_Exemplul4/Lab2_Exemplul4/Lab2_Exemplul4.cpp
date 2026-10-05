#include <stdio.h>
/* Programul schimba continutul a doua variabile întregi */
int main()
{
	/* se pot declara mai multe variabile de acelasi tip pe o singura linie */
	int a = 10, b = 20, c;
	printf("Inainte: prima este %d, a doua este %d \n", a, b);
	c = a;
	a = b;
	b = c;
	printf("Dupa: prima este %d, a doua este %d \n", a, b);
	return 0;
}