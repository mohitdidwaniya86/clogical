#include<stdio.h>
int main(){
    char x;
    printf("enter any character");
    scanf("%c",&x);
    if(x=='q'|| x=='e'||x=='p'||x=='w'||x=='o'||x=='i'||x=='u'||x=='y'||x=='r'||x=='t')
    {
        printf("uper line");
    }else{
        printf("not valid");
    } return 0;
}

