#include <stdio.h>
#include <string.h>
int main()
{
	char sir[80], subsir[80];
	char *p;
	printf("Introduceti sirul: ");
	fgets(sir, 80, stdin);
	printf("Introduceti subsirul cautat: ");
	fgets(subsir, 80, stdin);
	sir[strlen(sir) - 1] = '\0';
	subsir[strlen(subsir) - 1] = '\0';
	p = strstr(sir, subsir);
	if (p != NULL)
		printf("%s contine %s \n", sir, subsir);
	else
		printf("%s nu contine %s \n", sir, subsir);
	return 0;
}