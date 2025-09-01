/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 

int main()
{

float  radio, A,  lado;

printf("\n\n*** Este programa calcula el %crea que queda entre un cuadrado y\n\n*** un c%crculo inscrito en %cl \n\n",160, 161,130);

printf ("\nIndique por favor el radio del c%crculo: ",161);
scanf("%f",  &radio);

lado   =  2*radio;                         

A = lado*lado - M_PI * radio * radio ;


printf ("\nEl valor del %crea es: %.2f \n\n",160, A);

system("pause");

 return 1;
}
*/

#include<stdio.h>

 

int main()

{

    int cant = 0, num, i;

    char symbol ;

 

    while ( cant++ < 4)

    {

        printf("\n Introduzca un valor: ");

        scanf( "%d", &num);

        

        if ( num % 2 == 0 ) // es  par

           symbol  = '*' ;

        else

            symbol  = '!' ;

        

        printf("\n %d ", num);

        

        for ( i =1; i <= num ; i++)

           printf("%c", symbol);

        

        

    }

    

    printf("\n");

    return 0;

}
