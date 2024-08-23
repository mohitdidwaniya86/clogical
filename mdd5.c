// 1 2 3 4 5 
// 2 3 4 5 6 
// 3 4 5 6 7 
// 4 5 6 7 8 
// 5 6 7 8 9 
#include<stdio.h>
int main(){
    
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            printf(" %d",i+j+1);
            
        }
       
        printf("\n");
    }
    return 0;
}