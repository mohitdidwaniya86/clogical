
#include<stdio.h>
int main()
{
    int unit;
    float amount;
    printf("name:mohit didwaniya\n");
    printf("enter the user unit:\n");
    scanf("%d",&unit);
    amount=unit*10;
    if(unit>=1 && unit<=10){
        printf("10 percent discount in bill:%.2f\n",amount);
        float total_bill;
        total_bill = amount*0.90;
        printf("total_bill :%.2f",total_bill);
    }
    else if (unit>=11 && unit<=20){
         printf("15 percent discount in bill:%.2f\n",amount);
       float total_bill;
        total_bill = amount*0.85;
        printf("total_bill :%.2f",total_bill);
    
    }else if(unit>=21 && unit<=40){
         printf("30 percent discount in bill:%.2f\n",amount);
       float total_bill;
        total_bill = amount*0.70;
        printf("total_bill :%.2f",total_bill);
    
    }else if (unit==50){
         printf("50 percent discount in bill:%.2f\n",amount);
        float total_bill;
        total_bill = amount*0.50;
        printf("total_bill :%.2f",total_bill);
    
    }else{printf("no discount");
    
    }
return 0;
}





