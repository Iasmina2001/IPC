#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char sir[] = "Hello, world!";
	const char delim[] = " ,!"; // Delimitatori: spatiu, virgula, semn de exclamare
	char *token;
	// Obtinem primul token
	token = strtok(sir, delim);
	// Continuam sa obtinem token-uri pana cand nu mai exista
	while (token != NULL)
	{
		printf("%s\n", token); // Afisam token-ul
		token = strtok(NULL, delim); // Obtinem urmatorul token
	}
	return 0;
}