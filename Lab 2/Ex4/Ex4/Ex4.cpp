#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int gradeC_i32, gradeF_i32;
	printf("Introduceti gradele C: ");
	scanf("%d", &gradeC_i32);
	gradeF_i32 = (float)gradeC_i32 * (float)(9.0f / 5.0f) + (float)32;
	printf("Gradele F: %d\n", gradeF_i32);
	return 0;
}