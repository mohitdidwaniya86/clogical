// 2)three number maximum 

#include<stdio.h>
int main(){
    int a ,b,c;
    printf("enter the value of a, b and c:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {printf("a is greater than c nd b");
    } else if(b>c && b>a){
        printf("b is greater than a nd c");
    } else{
 printf(" c is max.");
    }
       
    return 0;
    
}