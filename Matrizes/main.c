#include <stdio.h>

int main() {
    int original[5][2];
    int transposta[2][5];
    int i, j;
    
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 2; j++) {
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &original[i][j]);
        }
    }
    
   
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 2; j++) {
            transposta[j][i] = original[i][j];
        }
    }
    
   
    printf("\nMatriz Original (5x2):\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d \t", original[i][j]);
        }
        printf("\n");
    }     
    
   
    printf("\nMatriz Transposta (2x5):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d \t", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}