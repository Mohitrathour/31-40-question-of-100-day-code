#include<stdio.h>
int main()
{
    int no,sum=0,temp;
    printf("enter the no\n");
    scanf("%d",&no);
    while(no>0)
    {
        temp=no%10;
        sum=sum+temp;
        no=no/10;
    }
    printf("sum of no %d \n",sum);
    return 0;
}