#include <stdio.h>
#include <string.h>


int main(){
    char tweet[500];
    fgets(tweet,500, stdin);
    tweet[strlen(tweet)-1] = '\0';

    int tam = strlen(tweet);

    if(tam<=140){
        printf("TWEET\n");
    }else{
        printf("MUTE\n");
    }
    return 0;
}