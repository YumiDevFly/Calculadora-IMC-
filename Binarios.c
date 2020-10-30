#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
int num;
char b[10];


printf("Digite o numero inteiro:\n ");
scanf("%d", &num);
getchar();

itoa(num,b,2);

printf("O numero %d binario e: %s ", num,b);

printf( " O num %d tem %d bits \n", num,strlen(b));

getchar();
return 0;
}


       