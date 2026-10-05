#include <stdio.h>
int main(void)
{
	float medAritm_fl32, medAritmPonderata_fl32;
	printf("Datele de intrare sunt: 10, 10, 20, 30, 20\n");
	medAritm_fl32 = (10.0f + 10.0f + 20.0f + 30.0f + 20.0f) / 5.0f;
	printf("Media aritmetica este: %.2f\n", medAritm_fl32);
	medAritmPonderata_fl32 = (2.0f * 10.0f + 2.0f * 20.0f + 1.0f * 30.0f) / (2.0f + 2.0f + 1.0f);
	printf("Media aritmetica ponderata este: %.2f\n", medAritmPonderata_fl32);
	return 0;
}