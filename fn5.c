// addition
// sub
// multi
// div 
// through function (return nd argument)

#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int div(int a, int b);

int main()
{   int a,b;
    int c;
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    printf("%d\n" ,add(a,b) );

   
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    printf("%d\n", sub(a,b));

    
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
   printf("%d\n" ,mult(a,b));

   
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
  printf("%d\n" ,div(a,b));
    return 0;

}
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int sub(int a, int b)
{
    int c;
    c=a-b;
    return c;
}
int mult(int a, int b)
{
    int c;
   
    c=a*b;
    return c;
}
int div(int a, int b)
{
    int c;
   
    c=a/b;
    return c;
}
