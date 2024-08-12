#include<stdio.h>
int main(){
    float a;
    int b;
    int  c;
    int d;
    float e;
    float f;

      printf("enter the value of a is \n: ");
       scanf("%f",&a );
       printf("enter the value of b is\n : ");
        scanf("%d",&b );
        printf("enter the value of c is\n : ");
         scanf("%d",&c );
       printf("enter the value of d is\n : ");
       scanf("%d",&d );
       
      printf("enter the value of e is \n: ");
       scanf("%f",&e );
       
      printf("enter the value of f is \n: ");
       scanf("%f",&f );
       
       int res=a*b-c/d+e-f;
       printf("%d",res);
       return 0;
}