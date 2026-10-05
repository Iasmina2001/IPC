#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI_FL32 (float)3.14f
int main(void)
{
	float raza_fl32, aria_fl32;
	printf("Introduceti raza cercului: ");
	scanf("%f", &raza_fl32);
	aria_fl32 = PI_FL32 * raza_fl32 * raza_fl32;
	printf("Aria cercului: %.2f", aria_fl32);
	return 0;
}