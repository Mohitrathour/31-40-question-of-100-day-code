#include<stdio.h>
int main()
{
    int no,temp,product=1;
    printf("enter the no\n");
    scanf("%d",&no);
    while(no>0)
    {   temp=no%10;
        if(temp%2 != 0)
        {
            product=product*temp;
        }
        no=no/10;   
    }
    printf("product: %d \n",product);
    return 0;

}