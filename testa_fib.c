#include <stdlib.h>
#include <stdio.h>

int testa_fib (int testa){
  int i;
  int j;
  int fib;

  i = 0;
  j = 1;

  do {
    fib = i + j;
    i = j;
    j = fib;
  }while (fib < testa);

  return (fib == testa);
  //se saiu do loop, fib >= testa. Se fib > testa, 0 -> não pertence.
}

int main (){
  int valor;

  valor = 0;

  printf("Querido usuario, digite o valor a ser testado\n");
  scanf("%d", &valor);

  if (valor < 0)
    printf("Valor negativo!\n");
  else if (valor < 2)
    printf("Valor pertence a sequencia de Fibonacci!\n");
  else {
    if (testa_fib(valor))
      printf("Valor pertence a sequencia de Fibonacci!\n");
    else
      printf("Valor nao pertence a sequencia de Fibonacci!\n");
  }
  
  return 0;
}
