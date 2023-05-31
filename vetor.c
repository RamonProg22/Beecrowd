#include <stdio.h>

int main(){

    int  req=0, p=0, im=0;
    int par[5], impar[5];


    for(int i=0;i<15;i++){
        scanf("%d", &req);


        if(req%2==0){
            par[p]= req;
            p++;
        }
        if(p == 5){
            for(int j=0; j<5;j++){
                printf("par[%d] = %d\n",j, par[j]);
            }
            p=0;
        }

        if(req%2!=0){
            impar[im]= req;
            im++;
        }
        if(im == 5){
            for(int j=0; j<5;j++){
                printf("impar[%d] = %d\n",j, impar[j]);
            }
            im=0;
        }


        if(i==14){
            for(int x=0; x<im ;x++){
                printf("impar[%d] = %d\n",x, impar[x]);
            }


            for(int z=0; z<p ;z++){
                printf("par[%d] = %d\n",z,par[z]);
            }
        }
    }
    return 0;
}