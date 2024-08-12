#include <stdio.h>
int main()
{
    int age;
    printf("enter the user age:");
    scanf("%d", &age);
    if (age >= 18)
        
    {
        printf("user is valid for voter");
    }
    else
    {
        printf("user is not valid for voter");
    }
    return 0;
}
