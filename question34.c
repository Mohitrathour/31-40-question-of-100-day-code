#include<stdio.h>
int main()
{
    int no,i;
    int count=0;
    printf("enter the no to find the factor\n");
    scanf("%d",&no);
    for ( i == 1; i<=no ; i++)
    {
        if(no%i==0)
        {
          count++;
        }
    }  
    if(count == 2){
        printf("prime\n");
    } 
    else
    {
        printf("not prime\n");
    }
    return 0;
}