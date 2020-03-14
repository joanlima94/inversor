/* Data de submissao:
 * Nome: Joan Lima Rios
 * RA: 175870
 */

#include <stdio.h>
#include <string.h>

const int tam_buffer=100;
int n_elem = 0;
char buffer[100];
/*
char *inverte (char *c) //Função que inverte as letras de uma palavra
{
  char aux1;
  int i,tam=strlen(c),j;
  int tam_palavra=0,conta_letra=0,posicao=0;
  while (conta_letra<strlen(c))
  {
    if ((c[conta_letra]==' ') || (c[conta_letra]=='\0'))
    {
      tam_palavra = posicao;
      for(i=0, j = tam_palavra;i<j;i++,j--)
      {
        aux1 = c[i];
        c[i] = c[j];
        c[j] = aux1;
      }
      posicao = 0;
    }

    conta_letra++;
    posicao++;
  }
    return c;
}
*/
void coloca(char c)
{
  if(n_elem < tam_buffer)
  {
    buffer[n_elem] = c;
    n_elem++;
  }
}

char retira()
{
  char c;
  if (n_elem>0)
  {
    n_elem--;
    c = buffer[n_elem];
  }
  return c;
}

int main()
{
  int cont=0,flag =0, guarda = 0, coluna=0;
  char c,pilha[tam_buffer];
  int i=0;

  fgets(buffer, tam_buffer, stdin);

  for (i = 0; i < strlen(buffer); i++)
  {
      coloca(buffer[i]);
  }
  for (i = 0; i < strlen(buffer); i++)
  {
    c = retira();
    printf("%c",c);
  }



  return 0;
}
