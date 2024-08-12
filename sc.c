#include<stdio.h>
int main(){
    char x;
    printf("enter any character");
    scanf("%c",&x);
    if(x=='a'|| x=='e'||x=='p'||x=='k')
    {
        printf("peak word");
    }else{
        printf("not valid");
    } return 0;
}
