#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define MINUS_ONE_FL32 (float)-1.0f
#define TWO_FL32 (float)2.0f

/*
TEST: a = 1, b = -3, c = 2 => x1 = 2, x2 = 1
TEST: a = 7, b = -3, c = 2 => fara radacini reale
TEST: a = 0, b = -3, c = 2 => x1,2 = 2 / 3 ~= 0.67
*/

int main(void)
{
	// a * x^2 + b * x + c = 0
	int a_i32, b_i32, c_i32;
	int delta_i32;
	float x1_fl32, x2_fl32;
	printf("Sa se rezolve ecuatia de gradul al doilea a * x^2 + b * x + c = 0\n");
	printf("Introduceti a: ");
	scanf("%d", &a_i32);
	printf("Introduceti b: ");
	scanf("%d", &b_i32);
	printf("Introduceti c: ");
	scanf("%d", &c_i32);
	// delta = b^2 - 4 * a * c
	delta_i32 = b_i32 * b_i32 - 4 * a_i32 * c_i32;
	// x1,2 = (-b +- sqrt(delta)) / (2 * a)
	if (delta_i32 < 0)
	{
		printf("Nu exista radacini reale\n");
	}
	else
	{
		if (a_i32 == 0)
		{
			x1_fl32 = MINUS_ONE_FL32 * (float)c_i32 / (float)b_i32;
			x2_fl32 = x1_fl32;
		}
		else
		{
			x1_fl32 = (MINUS_ONE_FL32 * (float)b_i32 + sqrt(delta_i32)) / (TWO_FL32 * (float)a_i32);
			x2_fl32 = (MINUS_ONE_FL32 * (float)b_i32 - sqrt(delta_i32)) / (TWO_FL32 * (float)a_i32);
		}
		printf("x1 = %.2f, x2 = %.2f\n", x1_fl32, x2_fl32);
	}
	return 0;
}
