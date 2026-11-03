#include <stdio.h>

int main()
{
	int n, rand, col, opt;
	int a[100][100];

	printf("n=");
	scanf("%d", &n);

	for (rand = 0; rand < n; rand++)
		for (col = 0; col < n; col++)
			scanf("%d", &a[rand][col]);

	do
	{
		printf("\n1.Afisare matrice");
		printf("\n2.Minim");
		printf("\n3.Coloane strict crescatoare");
		printf("\n4.Coloane strict descrescatoare");
		printf("\n5.Transpusa");
		printf("\n6.Iesire");
		printf("\nOptiune=");
		scanf("%d", &opt);

		switch (opt)
		{
		case 1:
			for (rand = 0; rand < n; rand++)
			{
				for (col = 0; col < n; col++)
					printf("%d ", a[rand][col]);
				printf("\n");
			}
			break;

		case 2:
		{
			int min = a[0][0];

			for (rand = 0; rand < n; rand++)
				for (col = 0; col < n; col++)
					if (a[rand][col] < min)
						min = a[rand][col];

			printf("Min=%d\n", min);
			break;
		}

		case 3:
		{
			int cnt = 0;
			bool colStrictCrescatoare_b;

			for (col = 0; col < n; col++)
			{
				colStrictCrescatoare_b = true;

				for (rand = 0; rand < n - 1; rand++)
					if (a[rand][col] >= a[rand + 1][col])
						colStrictCrescatoare_b = false;

				if (true == colStrictCrescatoare_b)
					cnt++;
			}

			printf("%d\n", cnt);
			break;
		}

		case 4:
		{
			int cnt = 0;
			bool colStrictDescrescatoare_b;

			for (col = 0; col < n; col++)
			{
				colStrictDescrescatoare_b = true;

				for (rand = 0; rand < n - 1; rand++)
					if (a[rand][col] <= a[rand + 1][col])
						colStrictDescrescatoare_b = false;

				if (true == colStrictDescrescatoare_b)
					cnt++;
			}

			printf("%d\n", cnt);
			break;
		}

		case 5:
			printf("Transpusa:\n");

			for (rand = 0; rand < n; rand++)
			{
				for (col = 0; col < n; col++)
					printf("%d ", a[col][rand]);

				printf("\n");
			}
			break;
		}
	} while (opt != 6);

	return 0;
}