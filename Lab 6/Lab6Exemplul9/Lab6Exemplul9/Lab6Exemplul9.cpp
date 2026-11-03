#include<stdio.h>
#include<string.h>
int main()
{
	char s1[] = "abc cba xab";
	char *r = strrchr(s1, 'a');
	if (r != NULL)
		printf("S-a gasit caracterul %c la pozitia %d!\n", 'a', r - s1);
	else
		printf("Nu s-a gasit caracterul!\n");
	return 0;
}