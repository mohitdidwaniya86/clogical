// addition
// sub
// multi
// div 
// through function (return nd no argurment)

#include<stdio.h>
int add();
int sub();
int mult();
int div();

int main()
{
    printf("%d\n" ,add() );
    printf("%d\n", sub());
   printf("%d\n" ,mult());
  printf("%d\n" ,div());
    return 0;

}
int add()
{
    int a,b,c;
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
}
int sub()
{
    int a,b,c;
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    c=a-b;
    return c;
}
int mult()
{
    int a,b,c;
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    c=a*b;
    return c;
}
int div()
{
    int a,b,c;
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    c=a/b;
    return c;
}




