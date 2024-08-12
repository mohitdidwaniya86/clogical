#include<stdio.h>
int main(){
    char x;
    printf("enter any character");
    scanf("%c",&x);
    if(x=='a'|| x=='e'||x=='o'||x=='i'||x=='u')
    {
        printf("vowel");
    }else{
        printf("consonant");
    } return 0;
}