#include<stdio.h>
int main(){
    float a;
    float b;
    float  c;
    float d;
    int e;
    float f;

      printf("enter the value of a is \n: ");
       scanf("%f",&a );
       printf("enter the value of b is\n : ");
        scanf("%f",&b );
        printf("enter the value of c is\n : ");
         scanf("%f",&c );
       printf("enter the value of d is\n : ");
       scanf("%f",&d );
       
      printf("enter the value of e is \n: ");
       scanf("%d",&e );
       
      printf("enter the value of f is \n: ");
       scanf("%f",&f );
       
       int res=a*b-c/d+e-f;
       printf("%d",res);
       return 0;
}