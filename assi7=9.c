#include<stdio.h>
int main()
{
    int num,rem,n=0,n1;
    printf("enter the number:");
    scanf("%d",&num);
    n1=num;
    while(num>0)
    {
        rem=num%10;
        n=n+rem*rem*rem;
        num=num/10;
    }
    if(n1==n)
        printf("%d is a armstrong number",n1);
    else
        printf("%d is not a armstrong number",n1);
}