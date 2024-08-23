#include<stdio.h>
void swap();
void wswap();
int main(){
    swap();
    wswap();
    return 0;

}
void swap(){
    int a,b,c;
    printf("enter the value of a and b is:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("swap value of a is: %d\n",a);
     printf("swap value of b is: %d\n",b);
}
wswap(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swap value of a is: %d\n",a);
     printf("swap value of b is: %d\n",b);
}