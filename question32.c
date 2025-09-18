#include<stdio.h>
int main()
{
    int no,rev=0,temp,store;
    printf("enter the no to be check\n");
    scanf("%d",&no);
    store=no;
    while (no > 0)
    {
        temp=no%10;
        rev=rev*10+temp;
        no=no/10;
    }
    if(store == rev)
      {
        printf("palindrome no\n");
      }
    else{
        printf("not a palindrome no\n");
    }
    return 0;
}