// 1
// 23
// 456



#include<stdio.h>
int main()
{
    int k=1;
   for(int i=1;i<=3;i++){
       for(int j=1;j<=i;j++){
           printf("%d",k);
           k++;
           
       }
       printf("\n");
   }
   
    return 0;
}