#include <stdio.h>

int main()
{
    int A[][5]={1,2,3,4,5,6,7,8,9,10};
    int i,j;
    int cont = 0;
   
   
    for(i = 0; i < 2; i++)
    {
     for(j = 0; j < 5; j++)
     {
        printf("%d\t", A[i][j]);
        cont = cont + A[i][j];
     }  
     printf("\n");  
     
    }
   
    printf("S = %d", cont);
   

    return 0;
}
