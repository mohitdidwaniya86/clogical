#include<stdio.h>
void armstrong();
void palindrome();
void even();
void reverse ();
void count_digit();
void sum ();
int main(){
    char x;
    printf("enter any character:");
    scanf("%c",&x);
    if(x=='a'){
        armstrong();
    }
    else if(x=='p'){
        palindrome();
    }
     else if(x=='e'){
        even();
    }
    else if(x=='r'){
        reverse();
    }
    else if(x=='c'){
        count_digit();
    }else if(x=='s'){
        sum();
    }else{
        printf("input is not found");
    }
    return 0;
}
void armstrong(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int temp=num;
    int rem,sum=0;
    while(num>0){
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;

    }
    if(temp==sum){
        printf("armstrong");
    }else{
        printf("not");
    }
    
}
void palindrome(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int temp=num;
    int rem,sum=0;
  
   
    while(num>0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;

    }
    if(temp==sum){
        printf("palindrome");
    }else{
        printf("not");
    }
}
void even(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num%2==0){
        printf("even");
    }else{
        printf(" not even");
    }
}
void reverse(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int rem,sum=0;
    while(num>0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    printf("%d",sum);
}
void count_digit(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int count=0;
    while(num>0){
        num=num/10;
        count++;
    }
    printf("%d",count);
}
void sum(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int rem,sum=0;
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("%d",sum);

}