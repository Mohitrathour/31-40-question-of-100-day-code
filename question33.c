//Q33: Write a program to check if a number is an Armstrong number.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp=0,store,store2,s=0,c=0;
    printf("enter the no to check\n");
    scanf("%d",&n);
    store=n;
    store2=n;
    while(store>0)
    {
        c=c+1;
        store=store/10;
    }
    while(store2>0)
    {
        temp=store2 % 10;
        s=s+pow(temp,c);
        store2=store2 / 10;
    }
    if(s==n)
    {
        printf("yes it is amstrong no\n");
    }
    else{ printf("no it is not amstrong no\n");}
    return 0;
}    