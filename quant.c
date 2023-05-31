#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
  char v1[50];
  char v2[50];
  int oco=0;
  int posi = 0;
  char *p = v2;

  fgets(v1, 50, stdin);
  v1[strlen(v1)-1] = '\0';

  fgets(v2, 50, stdin);
  v2[strlen(v2)-1] = '\0';

  while ((p = strstr(p, v1)) != NULL)
  {
    oco++;
    p = p+strlen(v1);
  }
  

  printf("A string '%s' aparece %d vezes dentro da string '%s', e fica na posi '%d'\n", v1, oco, v2, posi);
  return 0;

}