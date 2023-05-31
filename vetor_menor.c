#include <stdio.h>

int main(){
    int rq=0, val=0, menor=0, po=0;
    scanf("%d", &rq);
    int vet[rq];

    for(int i=0; i<rq; i++){
        scanf("%d",&val);
        if(i==0){
            menor = val;
        }
        vet[i]= val;
        if(val < menor){
            menor = vet[i];
            po = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",menor,po);
    return 0;
}