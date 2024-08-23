#include<stdio.h>
void swap(int a,int b);
void wswap(int c,int d);
int main(){
    int a,b;
    printf("enter the value of a and b is:");
    scanf("%d %d",&a,&b);
    swap(a,b);

  
    printf("enter the value of a and b is:");
    scanf("%d %d",&a,&b);
    wswap(a,b);
    
    return 0;

}
void swap(int a , int b){
    int c;
    
    c=a;
    a=b;
    b=c;
    printf("swap value of a is: %d\n",a);
     printf("swap value of b is: %d\n",b);
}
wswap(int a , int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swap value of a is: %d\n",a);
     printf("swap value of b is: %d\n",b);
}