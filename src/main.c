/* Data de submissao: 15/03/2020
 * Nome: Joan Lima Rios
 * RA: 175870
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int tam_buffer=100;
int main()
{
  char buffer[tam_buffer], aux_troca;
  fgets(buffer,tam_buffer,stdin);
  int i=0,j=0,k=0;//tam = strlen(buffer);

  int tam = strlen(buffer) - 1;
  if (buffer[tam] == '\n') buffer[tam] = '\0';
  //Aqui precisei fazer uma verificação para retirar o \n no final da string
  //Pois o fgets é sensivel ao enter
  for(i=0;i<tam;i++)
  {
    if ((!isalnum(buffer[i])) || (i == tam-1))
    //verifica se o caracter inserido é letra inserida ou é número ou se já chegou na ultima letra da string
    {
      if(i < tam - 1)
    //Para o caso de não ter chegado na última letra, salva as posições dos espaços
      {
        k = i - 1;
      } else
    //Caso tenha chegado na última letra, armazena sua posição
      {
        k = i;
      }
      while (j<k)
    //laço para inverter as letras de palavra por palavra
      {
        aux_troca = buffer[j];
        buffer[j] = buffer[k];
        buffer[k] = aux_troca;
        j++;
        k--;
      }
      j = i + 1;
    }
  }

  printf("%s\n",buffer);
  return 0;
}
