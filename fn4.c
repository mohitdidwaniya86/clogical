// RETURN AND ARGUMENT 
// char , float :return and argument 
// float -->return 

#include<stdio.h>
char show(char a);
float display(float a);
float car();


int main()
{
    printf("%c\n",show('m'));
    printf("%f\n",display(3.6));
    
    printf("%f",car());
    return 0;

}
char show(char a){
    return a;
}
float display(float a)
{
    return a;
}
float car()
{
    float f;
    printf("enter float num:\n");
    scanf("%f",&f);
    return f;
}