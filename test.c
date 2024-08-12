#include<stdio.h>
int main()
{
    char a;
    printf("Enter the value of a:");
    scanf("%c",&a);
    if (a=='a')
    {
        int n1,n2,n3,n4,n5;
        float avg;
        printf("Enter the value of n1 n2 n3 n4 n5:");
        scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
        avg=n1+n2+n3+n4+n5/5;
        printf("avg %f",avg);

        if (n1>36 && n2>36 && n3>36 && n4>36 && n5>36)
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