#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	float a_fl32;
	float b_fl32;
	float c_fl32;
	float p_fl32;
	float aria_fl32;

	printf("Introduceti lungimile celor trei laturi.\n");
	printf("lungimea laturii a: ");
	scanf("%f", &a_fl32);
	printf("lungimea laturii b: ");
	scanf("%f", &b_fl32);
	printf("lungimea laturii c: ");
	scanf("%f", &c_fl32);

	if ((a_fl32 > 0) &&
		(b_fl32 > 0) &&
		(c_fl32 > 0) &&
		(a_fl32 + b_fl32 > c_fl32) &&
		(a_fl32 + c_fl32 > b_fl32) &&
		(b_fl32 + c_fl32 > a_fl32))
	{
		p_fl32 = (a_fl32 + b_fl32 + c_fl32) / 2.0f;
		aria_fl32 = sqrt(p_fl32 * (p_fl32 - a_fl32) * (p_fl32 - b_fl32) * (p_fl32 - c_fl32));

		printf("Aria triunghiului este: %.2f\n", aria_fl32);
	}
	else
	{
		printf("Laturile introduse nu formeaza un triunghi.\n");
	}

	return 0;
}