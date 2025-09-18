#include<stdio.h>
int main()
{
    int no,binary[32];
    int i = 0;
    printf("enter the no to be converted into binary representation");
    scanf("%d",&no);
    if(no==0);
    {
        printf("0");
        return 0;
    }
    while (no > 0 )
    {
        binary[i] = no % 2;
        no=no/2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d",binary[j]);
    }
    return 0;
}