#include<stdio.h>
int main(){
char x;
    printf("enter character:");
    scanf(" %c",&x);
    if(x == 's'){
        printf("enter character two:");
        scanf(" %c",&x);
        if(x == 'w'){
            int a=10;
            int b=20;
            int c;
            printf("the value of a is :%d",a);
             printf("the value of b is :%d",b);
             c=a;
             a=b;
             b=c;

           
            printf("the swap value of a is  %d :",a);
             printf("the swap value of b is %d :",b);
        }
    }
    else if(x=='o'){
        printf("enter the 3rd char:");
        scanf("%c",&x);
         int t1=90;
         int t2=57;
        printf("enter the value of a is :%d",t1);
         printf("enter the value of b is :%d",t2);
         t1=t1+t2;
         t2=t1-t2;
         t1=t1-t2;
         printf("the swap value of t1 is:%d",t1);
          printf("the swap value of t2 is:%d",t2);


    }return 0;
}
         
