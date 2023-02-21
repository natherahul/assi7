#include<stdio.h>
int main()
{
    int n,n1=-1,n2=1,num,i;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the nth terms of fibbonacci series are:");
    for(i=1;i<=n;i++)
    {
        num=n1+n2;
        n1=n2;
        n2=num;
    }
    printf("%d",num);
}