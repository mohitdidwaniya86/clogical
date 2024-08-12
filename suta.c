#include<stdio.h>
int main(){
    float a;
    float b;
    float c;
    int d;

      printf("enter the value of a is \n: ");
       scanf("%f",&a );
       printf("enter the value of b is\n : ");
        scanf("%f",&b );
        printf("enter the value of c is\n : ");
         scanf("%f",&c );
       printf("enter the value of d is\n : ");
       scanf("%d",&d );
       
       int res=a*b-c/d;
       printf("%d",res);
       return 0;
}