#include<stdio.h>
int main()
{
    char a;
    
    printf("Enter any charcter : ");
    scanf("%c",&a);
    if (a=='a')
    {
        int a=1;
        while (a<=10)
        {
            printf("%d",a);
            a++;
        }
        
    }
    else if (a=='b')
    {
        int b=56;
        while (b>=36)
        {
            printf("%d",b);
            b--;
        }
      
    }
    else if (a=='c')
    {
        int a=1;
        while (a<=100)
        {
            if (a%2==0)
            {
                printf("%d",a);
            }
            a++;
        }
        
    }
    else if (a=='d')
    {
        int a=87;
        while (a>=32)
        {
            if (a%2!=0)
            {
                printf("%d",a);
            }
            a--;
        }
        
    }
    return 0;
    
    
}