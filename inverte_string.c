#include <stdio.h>
#include <stdlib.h>

void inverte_string (char* str){
   char str_inv[50];
   int i;
   int j;
   int conta;

   for (i = 0; str[i] != '\0'; i++);		//det o tamanho da str original
   conta = i;

   for (i = 0, j = conta-1; i < conta; i++, j--)
      str_inv[i] = str[j];

   str_inv[conta] = '\0';

   printf("O inverso da palavra digitada foi %s\n", str_inv);

}

int main (){
   char string1[50];

   printf("Querido usuario, digite uma palavra:\n");
   setbuf(stdin, NULL);
   gets(string1);

   inverte_string(string1);

   return 0;
}