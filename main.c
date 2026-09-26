#include <stdio.h>

int main()
{
	int MatA[3][3];
	int MatB[3][3];

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j< 3; j++) {

			printf("Dígite os valores %d %d", i, j);
			scanf("%d", &MatA[i][j]);

		}
	}

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {

			printf("Dígite os valores %d %d", i, j);
			scanf("%d", &MatB[i][j]);

		}
	}

	printf("\nResultado de (3 * A) - B:\n");
	for(int i = 0; i <3; i++) {
		for(int j = 0; j < 3; j++) {

			int resultado = (3*MatA[i][j] - MatB[i][j]);
			printf("%d \t", resultado);

		}
	}










	return 0;
}
