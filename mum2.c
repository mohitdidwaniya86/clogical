#include<stdio.h>
int main(){
    char x;
    printf("enter the character:");
    scanf(" %c",&x);
    if(x =='a')
    {
        int n;
        printf("enter the number:");
        scanf(" %d",&n);
        int rem,sum=0 ;
        while(n>0)
        {
            rem=n%10;
            sum=sum*10+rem;
            n=n/10;
        }
            printf(" %d",sum);  
    } else if(x=='b'){
        int num;
        printf("enter the number:");
        scanf("%d",&num);
        int temp=num;
        int rem,sum=0;
        while(num>0){
            rem=num%10;
            sum=sum*10+rem;
            num=num/10;
        }if(temp==sum){
            printf("no. is palindrome");
        }else{
            printf("no. is not palindrome");
        }

    }else if(x=='c'){
        int num;
        printf("enter the number:");
        scanf(" %d",&num);
         int temp=num;
        int rem,sum=0;
        while(num>0){
            rem=num%10;
            sum=sum+rem*rem*rem;
            num=num/10;
        }if(temp==sum){
            printf("no. is armstrong");
        }else{
            printf("no. is not armstrong");
        }


    }
    return 0;

}