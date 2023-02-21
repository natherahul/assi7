#include<stdio.h>
int main()
{
    int n1,n2,i;
    printf("enter the two numbers:");
    scanf("%d%d",&n1,&n2);
    for(i=n1;i>1;i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            printf("%d is hcf of two numbers",i);
            break;
        }
    }
}