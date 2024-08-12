#include <stdio.h>
int main()
{
    char a;
    printf("enter character:");
    scanf("%c", &a);
    if (a=='e')
    {
        int num;
        printf("enter your number:");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("even");
        }
        else
        {
            printf("no id odd");
        }
    }
    else if (a == 'v')
    {
        int age;
        printf("enter age:");
        scanf("%d", &age);
        if (age >= 18)
        {
            printf("voter is valid");
        }
        else
        {
            printf("voter is not valid");
        }
    }

    else if (a=='s')
    {
    int x;
    printf("enter number:");
    scanf("%d",&x);
    if (x==1)
    {
        printf("summer");
    }if(x==2){
        printf("winter");
    }if(x==3){
        printf("rainy");
    }
    }
    else  if(a=='m')
    {
        int m1,m2,m3,total;
        printf("enter all subject marks:");
        scanf("%d %d %d",&m1,&m2,&m3);
        total=m1+m2+m3/3;
        float percent;
        percent=(total/300.0)*100;
        printf("percrnt:%f\n",percent);
        if(percent>=80)
        {
            printf("a grade");
        }
        else if (percent>=50 && percent<80)
        {
            printf("b grade");
        }else if (percent>=36 && percent<60)
        {
            printf("c grade");
            
        }
    }
        
   else if(a=='k')
    {
        char a;
        printf("enter any character:");
        scanf(" %c",&a);
        if(a=='q' || a=='w'|| a=='e' || a=='r' || a=='t' || a=='y' || a=='u'|| a=='i' || a=='o' || a=='p')
        {
            printf("upper line");
        }if(a=='a'||a=='s'||a=='d'||a=='f'||a=='g'||a=='h'||a=='j'||a=='k'||a=='l'){
            printf("middle line");

        }if(a=='z'||a=='x'||a=='c'||a=='v'||a=='b'||a=='n'||a=='m'){
            printf("lower line");
        }
    }
    else if(a=='c'){
        char a;
        printf("enter any character:");
        scanf(" %c",&a);
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            printf("vowel ");
        }else{
            printf("consonant");
        }
    }
  return 0;
    }
      