//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include<stdio.h>
int main()
{
    int temp,no;
    printf("enter the no\n");
    scanf("%d",&no);
    while(no>0)
    {
        temp=no%10;
        if(temp == 1)
        {
            printf("0");
        }
        else if(temp == 0)
        {
            printf("1");
        }
        no=no/10;
    }
    return 0;
}