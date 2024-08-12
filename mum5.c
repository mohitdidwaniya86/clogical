#include<stdio.h>
int main (){
    char x;
    printf("enter the character:");
    scanf("%c",&x);
    if(x=='a'){
    int a=1; int sum=0;
    while(a<=10){
        if(a%2==0){
            printf("%d",a);
            sum=sum+a;
        }a++;
    }
    printf(" %d",sum);
    }else if(x=='b'){
    int a=1; int sum=0;
    while(a<=10){
        if(a%2!=0){
            printf(" %d",a);
            sum=sum+a;
        }a++;
    }
    printf(" %d",sum);

    }
    return 0;
}