#include <stdio.h>

int main()
{
	int mat[2][4];
	int soma = 0;

	for (int i = 0; i < 2; i++) {
		for (int j=0; j < 4; j++) {
			printf("Digite a linha [%d] [%d]: \n", i,j);
			scanf("%d", &mat[i][j]);

			soma += mat[i][j];

		}

	}

             printf("Resultado da Soma: %d \n", soma);



return 0;
}
