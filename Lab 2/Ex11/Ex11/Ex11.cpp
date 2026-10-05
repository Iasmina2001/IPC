#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a_i32, b_i32;
	printf("Introduceti primul numar intreg: ");
	scanf("%d", &a_i32);
	printf("Introduceti al doilea numar intreg: ");
	scanf("%d", &b_i32);
	printf("Media geometrica: %.2f", sqrt(a_i32 * b_i32));
	return 0;
}
