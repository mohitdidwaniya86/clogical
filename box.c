#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
      printf("enter the value of a is : ");
       scanf("%d",&a );
       printf("enter the value of b is : ");
        scanf("%d",&b );
        printf("enter the value of c is : ");
         scanf("%d",&c );
       printf("enter the value of d is : ");
       scanf("%d",&d );
        printf("enter the value of e is : ");
       scanf("%d",&e);
       int res=a*b+c/d-e;
       printf("%d",res);
       return 0;
}