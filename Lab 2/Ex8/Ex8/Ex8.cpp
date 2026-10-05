#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float b_fl32, B_fl32, h_fl32, ariaTrapezului_fl32;
	printf("Introduceti lungimea bazei mici: ");
	scanf("%f", &b_fl32);
	printf("Introduceti lungimea bazei mari: ");
	scanf("%f", &B_fl32);
	printf("Introduceti inaltimea trapezului: ");
	scanf("%f", &h_fl32);
	ariaTrapezului_fl32 = (b_fl32 + B_fl32) * h_fl32 / 2.0f;
	printf("Aria trapezului: %.2f\n", ariaTrapezului_fl32);
	return 0;
}
