#include<stdio.h>
int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18){

        int weight;
        printf("enter your weight:");
        scanf("%d",&weight);
    if(weight<=50){
printf("valid");
    }else{
        printf("weight is greter than 50");
        }
    }
    else{
printf("age is less than 18");
    }
    return 0;
}