#include <stdio.h>
int main()
{
  float a[2][2], b[2][2], result[2][2];

  
  printf("Enter elements of 1st matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Enter a%d%d: ", i, j);
      scanf("%f", &a[i][j]);
    }

  
  printf("Enter elements of 2nd matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Enter b%d%d: ", i, j);
      scanf("%f", &b[i][j]);
    }

  
  for (int i = 0; i < 2; ++i)   
    for (int j = 0; j < 2; ++j)  
    {
      result[i][j] = a[i][j] + b[i][j];
    }

 
  printf("\nSum Of Matrix:\n");

  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("%.1f\t", result[i][j]);

    }
        printf("\n");
  
    
  return 0;
}
