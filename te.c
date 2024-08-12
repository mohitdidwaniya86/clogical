#include<stdio.h>
int main() {
    char x;
    printf("enter any character:");
    scanf("%c",&x);
    if(x=='f'){
        float f,c;
        printf("enter temp in celsius:");
        scanf("%f",&c);
        f=(1.8*c)+32;
        printf("temp in ferenhite %.2f",f);
    }
    else if (x=='c')
    {
        float f,c;
        printf("Enter temp in fehren:");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("temp in celsius: %.2f",c);
    }
    
    return 0;

}
        
      
    



