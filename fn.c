// float -->return

//  return and no argument
#include <stdio.h>
float show();
int main()
{

    printf("%f", show());

    return 0;
}

float show()
{
    float f;
    printf("enter the number:");
    scanf("%f", &f);

    return f;
}
