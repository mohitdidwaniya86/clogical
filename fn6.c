// swap()  :with third variable 
// wswap() :without third variable 
// through function ( return & argument)

#include<stdio.h>
int swap(int a , int b);
int wswap(int a , int b);
int main()
{
     int a,b;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    printf("%d \n",swap(a,b));

     
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    printf("%d \n",wswap(a,b));
    return 0;
}
int swap(int a , int b)
{
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value after swapping:  %d ",a);
    return a,b;
}
int wswap(int a , int b)
{
    int c;
   
    c=a;
    a=b;
    b=c;
    printf("value after swapping:  %d ",a);
    return a,b;
}