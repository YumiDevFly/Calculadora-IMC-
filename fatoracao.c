#include<stdio.h>
#include<conio.h>
    

int verifica(int num, int cont){
	int contador,i,a;
	if(num%cont==0){
		num/=cont;
		num=verifica(num,cont);	
		contador = cont;
			if (contador = contador)
{
 	 a = a+1;
	
}
		printf("\n %d ^ %d \n", contador, a);




	}
	return num;
}




int main(){
	int num,cont;

		printf("digite um numero:  ");
		scanf("%d",&num);
		printf("\n\n");
		for(cont=2;num>1;cont++){
			num=verifica(num,cont);

		}
		printf("\n 1 \n");

	getch();
}

