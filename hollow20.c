#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(i==j){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }return 0;
}