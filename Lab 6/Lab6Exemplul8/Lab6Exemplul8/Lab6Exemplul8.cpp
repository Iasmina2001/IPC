#include<stdio.h>
#include<string.h>
int main()
{
	char s1[] = "abc";
	if (strchr(s1, 'z') != NULL)
		printf("S-a gasit caracterul!\n");
	else
		printf("Nu s-a gasit caracterul!\n");
	return 0;
}