//Q35: Write a program to print all factors of a given number.
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the no to find the factor\n");
    scanf("%d",&n);
    for(i = 1; i<=n; i++)
    {
        if(n%i==0)
        {
           printf("factors are %d\n",i);
        }
    }
    return 0;
}