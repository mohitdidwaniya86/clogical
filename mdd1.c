#include<stdio.h>
void add(int a, int b);
void sub(int c ,int d);
void mult(int e, int f);
void div(int g, int h);
int main(){
    int a,b,c,d,e,f,g,h;
     printf("enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    add(a,b);
    
     printf("enter the value of c and d: ");
    scanf("%d %d",&c,&d);
    sub(c,d);
    
     printf("enter the value of e and f: ");
    scanf("%d %d",&e,&f);
    mult(e,f);
    
     printf("enter the value of g and h: ");
    scanf("%d %d",&g,&h);
    div(g,h);
    return 0;
}
void add(int a, int b){
    int c;
    c=a+b;
    printf("%d\n",c);
}
void sub(int c, int d){
    int i;
   
    i=c-d;
    printf("%d\n",i);
}
void mult(int e, int f){
    int c;
   
    c=e*f;
    printf("%d\n",c);
}
void div(int g, int h){
    int c;
    c=g/h;
    printf("%d\n",c);
}