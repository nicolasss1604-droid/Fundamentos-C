#include <stdio.h>

int main()
{
    int matA[4][2];
    int matB[2][4];
    int resultado[4][4];
    int i, j, k;

   
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 2; j++) {
            printf("Digite os valores da Matriz A [%d][%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 4; j++) {
            printf("Digite os valores da Matriz B [%d][%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }
    
   
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            resultado[i][j] = 0;
            for(k = 0; k < 2; k++) {
                resultado[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    
    printf("\n--- Matriz A ---\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d \t", matA[i][j]);
        }
        printf("\n");
    }

    
    printf("\n--- Matriz B ---\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d \t", matB[i][j]);
        }
        printf("\n");
    }


    printf("\n--- Matriz Resultado (A x B) ---\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d \t", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
