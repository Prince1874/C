#include <stdio.h>
int main()
{
   int  i, j, matrix[10][10], transpose[10][10];
  
   printf("Enter elements of the matrix\n");
   for (i= 0; i <3; i++)
      for (j = 0; j < 3; j++)
         scanf("%d", &matrix[i][j]);
   for (i = 0;i < 3; i++)
      for (j = 0; j < 3; j++)
         transpose[j][i] = matrix[i][j];
   printf("Transpose of the matrix:\n");
   for (i = 0; i< 3; i++) {
      for (j = 0; j < 3; j++)
         printf("%d ", transpose[i][j]);
      printf("\n");
   }
   return 0;
}
