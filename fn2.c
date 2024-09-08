// swap()  :with third variable 
// wswap() :without third variable 
// through function 

#include<stdio.h>
int swap();
int wswap();
int main()
{

    printf("%d \n",swap());
    printf("%d \n",wswap());
    return 0;
}
int swap()
{
    int a,b;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value after swapping:  %d ",a);
    return a,b;
}
int wswap()
{
    int a,b,c;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("value after swapping:  %d ",a);
    return a,b;
}