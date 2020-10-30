
#include <stdio.h>

int gerarpalindromo(int n);

void main() {
  int n;

  printf("Numeros palindromo entre 1000 e 10000:\n");
  for (n=1000; n<=10000; n++) {
    if (n == inverteNumero(n))
       printf("%4d \n", n);
  }
}

int inverteNumero(int n) {
  int palindromo = 0;
  while (n != 0) {

    palindromo = (palindromo * 10) + (n % 10);


    n = n / 10;
  }

  return(palindromo);
}
