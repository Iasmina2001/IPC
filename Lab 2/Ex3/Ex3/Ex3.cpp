#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI_FL32 3.14f
int main(void)
{
	float unghiInGrade_fl32, unghiInRadiani_fl32;
	printf("Introduceti unghiul in grade: ");
	scanf("%f", &unghiInGrade_fl32);
	unghiInRadiani_fl32 = unghiInGrade_fl32 * PI_FL32 / (float)180.0f;
	printf("Unghiul in radiani: %f", unghiInRadiani_fl32);
	return 0;
}