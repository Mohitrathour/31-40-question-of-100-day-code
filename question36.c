#include<stdio.h>
int main()
{
    int a,b,hcf;
    printf("enter first no\n");
    scanf("%d",&a);
    printf("enter second no\n");
    scanf("%d",&b);
    int x = a, y = b;
    while (x != y)
    {
        if(x > y)
        {
            x= x - y;
        }
        else
        {
           y = y - x;
        }
    }
    hcf=x;
    printf("%d",hcf);
    return 0;  
}