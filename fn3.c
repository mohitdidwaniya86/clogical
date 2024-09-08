#include<stdio.h>
int arm();
int pal();
int even();
int reverse();
int count();
int sum();
int fab();
int fact();
 int main()
 {  char x;
printf("enter any charcter:");
scanf("%c",&x);
if(x=='a'){
    printf("%d\n",arm());
    
 } 
 
else if(x=='p'){
    printf("%d\n",pal());

} else if(x=='e')
{
printf("%d\n",even());
}
else if(x=='r')
{
printf("%d\n",reverse());
}
else if(x=='c')
{
printf("%d\n",count());
}
else if(x=='s')
{
printf("%d\n",sum());
} 
else if(x=='b')
{
printf("%d\n",fab());
}
else if(x=='f')
{
 printf("%d\n",fact());
}  
else
{
    printf("not found");
}    
    return 0;
}

int arm()
{  
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int rem,sum=0;
    int temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum){
        printf("arm");
    } 
    else{
        printf("not match");
    }
    return sum;

}

int pal()
{  
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int rem,sum=0;
    int temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(temp==sum){
        printf("pal");
    } 
    else{
        printf("not match");
    }
    return sum;

}

int even()
{  
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("even");
    } else{
        printf("not match");
    }
    return n;

}

int reverse()
{  
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int rem,sum=0;
    
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    
    
    return sum;

}
int count()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int count=0;
    while(n>0)
    {
        n=n/10;
        printf("%d",count);
        count++;

    }
    
    
    return count;

}
int sum()
{
     int n;
    printf("enter the number:");
    scanf("%d",&n);
   int rem,sum=0;
   while(n>0)
   {
    rem=n%10;
    sum=sum+rem;
    n=n/10;
   }
   
  
   return sum;

}

int fab()
{
     int n;
    printf("enter the number:");
    scanf("%d",&n);
     int n1=0,n2=1,n3;
     for(int i=1;i<=n;i++)
     {
        n3=n1+n2;
        printf(" %d ",n3);

        n1=n2;
        n2=n3;

     }
     return n1,n2,n3;

}

int fact()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
       
    } 
    return fact;

}

