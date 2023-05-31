#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char f1[100],f2[100], f3[100];

    fgets(f1,100,stdin);
    f1[strlen(f1)-1] = '\0';

    fgets(f2,100,stdin);
    f2[strlen(f2)-1] = '\0';

    fgets(f3,100,stdin);
    f3[strlen(f3)-1] = '\0';

    printf("%s%s%s\n", f1,f2,f3);
    printf("%s%s%s\n", f2,f3,f1);
    printf("%s%s%s\n", f3,f1,f2);

    
    for (int i = 0; i < 10; i++)
    {
        printf("%c",f1[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%c", f2[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%c", f3[i]);
    }
    printf("\n");

    return 0;

}