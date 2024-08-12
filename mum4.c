#include<stdio.h>
int main(){
    char x;
    printf("enter the character:");
    scanf(" %c",&x);
    if(x=='a'){
        int n;
        printf("enter the number:");
        scanf(" %d",&n);
        int temp=n;
        int rem,sum=0;
        while(n>0){
            rem=n%10;
            sum=sum+rem*rem*rem;
            n=n/10;

        }if(temp==sum){
            printf("armstrong number");
        }else{
            printf("not armstrong number");
        }

    }else if(x=='p'){
        int n;
        printf("enter the no.:");
        scanf("%d",&n);
        int temp=n;
        int rem,sum=0;
        while(n>0){
            rem=n%10;
            sum=sum*10+rem;
            n=n/10;

        }if(temp==sum){
            printf("no is palindrome");
        }else{
            printf("no is not palindrome");
        }


    }else if(x=='r'){
        int n;
        printf("enter the number:");
        scanf("%d",&n);
        int rem,sum=0;
        while(n>0){
            rem=n%10;
            sum=sum*10+rem;
            n=n/10;   
        }
        printf("%d",sum);


    }
    else if(x=='s'){
        int n;
        printf("enter the number:");
        scanf("%d",&n);
        int rem,sum=0;
        while(n>0){
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }printf("%d",sum);


    }
    return 0;
}