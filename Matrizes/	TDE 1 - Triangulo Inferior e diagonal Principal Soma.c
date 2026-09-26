// 6. Some todos os valores do triângulo inferior da diagonal principal, incluindo a
// diagonal principal de uma matriz 4x4.



#include <stdio.h>

int main()
{
	int matA[4][4] = {{1, 2, 3,4},
		{3, 2, 4, 5},
		{6,  5, 4, 3},
		{3, 2, 4, 4}
	};
	int soma = 0;

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {

			if(i > j || i == j) {

				soma += matA[i][j];

			}


		}
	}

	printf("%d", soma);






	return 0;
}
