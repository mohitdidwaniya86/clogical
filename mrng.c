#include<stdio.h>
int main(){
    int a;
    printf("enter the no.");
    scanf("%d",&a);
    if(a%5==0){
        printf("no. is divide by 5");
    }
    else{
        printf("no. does not divide by 5");
    } return 0;
}