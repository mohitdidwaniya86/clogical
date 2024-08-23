#include <stdio.h>
void armstrong(int num); // parameter
void palindrome(int num);
void even(int num);
void reverse(int num);
void count_digit(int num);
void sum(int num);
void factorial(int num);
void fibonacci(int num);
int main()
{
    char x;
    printf("enter any character:");
    scanf("%c", &x);
    if (x == 'a')
    {
        int a;
        printf("enter the number:");
        scanf("%d", &a);
        armstrong(a); // argument
    }
    else if (x == 'p')
    {
        int b;
        printf("enter the number:");
        scanf("%d", &b);

        palindrome(b);
    }
    else if (x == 'e')
    {
        int c;
        printf("enter the number:");
        scanf("%d", &c);
        even(c);
    }
    else if (x == 'r')
    {
        int d;
        printf("enter the number:");
        scanf("%d", &d);
        reverse(d);
    }
    else if (x == 'c')
    {
        int e;
        printf("enter the number:");
        scanf("%d", &e);
        count_digit(e);
    }
    else if (x == 's')
    {
        int f1;
        printf("enter the number:");
        scanf("%d", &f1);
        sum(f1);
    }
    else if (x == 'f')
    {
        int g;
        printf("enter the number:");
        scanf("%d", &g);
        factorial(g);
    }
    else if (x == 'b')
    {
        int h;
        printf("enter the number:");
        scanf("%d", &h);
        fibonacci(h);
    }
    else
    {
        printf("input is not found");
    }
    return 0;
}
void armstrong(int num)
{

    int temp = num;
    int rem, sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem * rem * rem;
        num = num / 10;
    }
    if (temp == sum)
    {
        printf("armstrong");
    }
    else
    {
        printf("not");
    }
}
void palindrome(int num)
{

    int temp = num;
    int rem, sum = 0;

    while (num > 0)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        num = num / 10;
    }
    if (temp == sum)
    {
        printf("palindrome");
    }
    else
    {
        printf("not");
    }
}
void even(int num)
{

    if (num % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf(" not even");
    }
}
void reverse(int num)
{

    int rem, sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        num = num / 10;
    }
    printf("%d", sum);
}
void count_digit(int num)
{

    int count = 0;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    printf("%d", count);
}
void sum(int num)
{

    int rem, sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("%d", sum);
}
void factorial(int num)
{

    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("%d",fact);
}
void fibonacci(int num)
{
    int n1 = 0, n2 = 1, n3;
    printf("%d %d", n1, n2);
    for (int i = 1; i <= num; i++)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
}