#include <stdio.h>
#include <string.h>


int main(){
    char tweet[500];
    fgets(tweet,500, stdin);

    int tam = strlen(tweet);

    if(tam<=140){
        printf("TWEET\n");
    }if (tam>140)
    {
        printf("\"MUTE\"\n");
    }
    return 0;


}