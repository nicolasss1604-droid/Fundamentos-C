// 7. Informe o maior valor acima da diagonal secundária de uma matriz 3x3.
#include <stdio.h>

int main()
{
   int matA[3][3] = {{1, 2, 3}, 
                     {3, 2, 1}, 
                     {4, 5, 6}};
   int MaiorValor = 0;

       for(int i = 0; i < 3; i++){
           for(int j = 0; j < 3 ; j++){
               
              if(j<(3 - i - 1 ) && MaiorValor < matA[i][j] ){
                  
                  MaiorValor = matA[i][j];
                  
              } 
              
           }
                  }
      
 printf("%d é o maior valor! ", MaiorValor);















    return 0;
}
