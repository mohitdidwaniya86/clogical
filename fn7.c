#include <stdio.h>
int arm(int n);
int pal(int n);
int even(int n);
int reverse(int n);
int count(int n);
int sum(int n);
int fab(int n);
int fact(int);
int main(int n)
{
    char x;
    printf("enter any charcter:");
    scanf("%c", &x);
    if (x == 'a')
    {
        int n;
        printf("enter the number:");
        scanf("%d", &n);
        printf("%d\n", arm(n));
    }

    else if (x == 'p')
    {
        int n;
        printf("enter the number:");
        scanf("%d", &n);
        printf("%d\n", pal(n));
    }
    else if (x == 'e')
    {
        int n;
        printf("enter the number:");
        scanf("%d", &n);
        printf("%d\n", even(n));
    }
    else if (x == 'r')
    {
        int n;
        printf("enter the number:");
        scanf("%d", &n);
        printf("%d\n", reverse(n));
    }
    else if (x == 'c')
    {
        int n;
        printf("enter the number:");
        scanf("%d", &n);
        printf("%d\n", count(n));
    }
    else if (x == 's')
    {
        int n;
        printf("enter the number:");
        scanf("%d", &n);
        printf("%d\n", sum(n));
    }
    else if (x == 'b')
    {
        int n;
        printf("enter the number:");
        scanf("%d", &n);
        printf("%d\n", fab(n));
    }
    else if (x == 'f')
    {
        int n;
        printf("enter the number:");
        scanf("%d", &n);
        printf("%d\n", fact(n));
    }
    else
    {
        printf("not found");
    }
    return 0;
}

int arm(int n)
{

    int rem, sum = 0;
    int temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("arm");
    }
    else
    {
        printf("not match");
    }
    return sum;
}

int pal(int n)
{

    int rem, sum = 0;
    int temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("pal");
    }
    else
    {
        printf("not match");
    }
    return sum;
}

int even(int n)
{

    if (n % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("not match");
    }
    return n;
}

int reverse(int n)
{

    int rem, sum = 0;

    while (n > 0)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }

    return sum;
}
int count(int n)
{

    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        printf("%d", count);
        count++;
    }

    return count;
}
int sum(int n)
{

    int rem, sum = 0;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    return sum;
}

int fab(int n)
{

    int n1 = 0, n2 = 1, n3;
    for (int i = 1; i <= n; i++)
    {
        n3 = n1 + n2;
        printf(" %d ", n3);

        n1 = n2;
        n2 = n3;
    }
    return n1, n2, n3;
}

int fact(int n)
{

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}