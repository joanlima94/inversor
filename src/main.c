/* Data de submissao:
 * Nome: Joan Lima Rios
 * RA: 175870
 */

#include <stdio.h>
#include <string.h>
const int tam_buffer=100;

char *inverte (char *c)
{
  char aux1,aux2;
  char buffer[] = "teste";
  int i,tam=strlen(c),j;

  for(i=0, j = tam - 1;i<j;i++,j--)
  {
    aux1 = c[i];
    c[i] = c[j];
    c[j] = aux1;
  }

  return c;
}

int main()
{

  /*char buffer[tam_buffer];
  fgets(buffer, tam_buffer, stdin);
  */
  char buffer[] = "teste";

  printf("%s",inverte(buffer));
  return 0;
}
