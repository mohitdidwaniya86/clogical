#include<stdio.h>
int main()
{
    char a;
    printf("Enter the value of a:");
    scanf("%c",&a);
    if (a=='a')
    {
        int n1,n2,n3,n4,n5;
        int avg;
        printf("Enter the value of n1 n2 n3 n4 n5:");
        scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
        avg=n1+n2+n3+n4+n5;
        float percent;
        percent=(avg/500.0)*100;
        printf("percent %f",percent);
        printf("avg",avg);

        if (n1>40 && n2>40 && n3>40 && n4>40 && n5>40)
        {
            printf("pass");
        }
        else
        {
            printf("fail");
        }
        return 0;
    }
    
}
