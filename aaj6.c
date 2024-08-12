#include<stdio.h>
int main()
{
    char a='a';
    printf("enter char:");
    scanf(" %c",&a);
    if(a=='a')
    {
        int a=1;
        while(a<=10)
        {
         if(a%2==0)
        {
            printf(" %d",a);
        }
        a++;
        }
       
    }

    else if(a=='b'){
        int a=1;
        while(a<=100)
        {
            {
                if(a%2==0)
            printf(" %d",a);
            }
            a++;
        }
    }else if(a=='c')
    {
        int a=50;
        while(a<=100){
            {
                if(a%2==0)
            printf(" %d",a);
            }
            a++;
        }
    }else if(a=='d')
    {
        int a=45;
        while(a<=89){
            {
                if(a%2==0)
            printf(" %d",a);
            }
            a++;
        }
    }else if (a=='e')
    {
        int a=10;
        while(a>=1){
            {
                if(a%2==0)
            printf(" %d",a);
            }
            a--;
        }
    }else if(a=='f')
    {
        int a=100;
        while(a>=1){
            {
                if(a%2==0)
            printf(" %d",a);
            }
            a--;
        }
    }else if(a=='g')
    {

    
        int a=100;
        while(a>=50){
            {
                if(a%2==0)
            printf(" %d",a);
            }
            a--;
        }
    } 
    else if(a=='h')
    {

    
        int a=89;
        while(a>=45){
            {
                if(a%2==0)
            printf(" %d",a);
            }
            a--;
        }
    } 



   return 0;
    
}