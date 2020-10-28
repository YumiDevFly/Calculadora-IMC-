#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void main(){

float altura, peso, imc;

printf("DIGITE SEU PESO E ALTURA: ");
scanf("%f%f", &peso, &altura );

float alt2 = pow(altura, 2);
imc = peso/alt2;

printf("Seu imc eh %.2f\n", imc);

float teste1 = 18.5 - imc;

float aumpes = teste1 * alt2;

float teste2 = imc - 24.9;

float redpes = teste2 * alt2;

if (imc < 18.5)
{
   printf("Estado: Magreza, precisa aumetar %.2fkg para chegar no normal", aumpes);
   
   
}
else
{
    if (imc > 18.5 && imc < 24.9)
{
   printf("Estado: Normal, esta com peso ideal.  ");
}
else
{
    if (imc >25.0 && imc < 29.9)
{
   printf("Estado: Sobrepeso  precisa reduzir %.2fkg para chegar no normal ", redpes);
}
else
{
    if (imc >30 && imc <39.9)
{
   printf("Estado: Obesidade, precisa reduzir %.2fkg para chegar no normal", redpes);
}
else
{
    if (imc > 40)
{
   printf("Estado: Obesidade Morbida, precisa reduzir %.2fkg para chegar no normal", redpes);
}
else
{
    
}
}
}
}
}


getch();
 return 0; 

}


