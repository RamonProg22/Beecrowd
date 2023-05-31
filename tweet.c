#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char tweet[140];
    gets(tweet);

    int tam = strlen(tweet);

    if(tam<=140){
        printf("TWEET\n");
    }else{
        printf("MUTE\n");
    }

    return 0;


}