#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a_i32, b_i32, maxim_i32;
	printf("Introduceti primul numar: ");
	scanf("%d", &a_i32);
	printf("Introduceti al doilea numar: ");
	scanf("%d", &b_i32);
	maxim_i32 = a_i32 * (a_i32 > b_i32) + b_i32 * (b_i32 > a_i32);
	printf("Maximul: %d", maxim_i32);
	return 0;
}
