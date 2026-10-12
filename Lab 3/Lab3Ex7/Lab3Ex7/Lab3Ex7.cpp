#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main()
{
	int i_i32, nr_i32;
	int max1_i32 = INT_MIN;
	int max2_i32 = INT_MIN;
	int max3_i32 = INT_MIN;
	long long suma_i64;

	printf("Introduceti 5 numere distincte:\n");

	for (i_i32 = 1; i_i32 <= 5; i_i32++)
	{
		printf("Numarul %d = ", i_i32);
		scanf("%d", &nr_i32);

		if (nr_i32 > max1_i32)
		{
			max3_i32 = max2_i32;
			max2_i32 = max1_i32;
			max1_i32 = nr_i32;
		}
		else if (nr_i32 > max2_i32)
		{
			max3_i32 = max2_i32;
			max2_i32 = nr_i32;
		}
		else if (nr_i32 > max3_i32)
		{
			max3_i32 = nr_i32;
		}
	}

	suma_i64 = (long long)max1_i32 + max2_i32 + max3_i32;

	printf("Cele mai mari 3 numere sunt: %d, %d si %d\n", max1_i32, max2_i32, max3_i32);
	printf("Suma celor mai mari 3 numere este: %lld\n", suma_i64);

	return 0;
}