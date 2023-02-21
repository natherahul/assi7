#include<stdio.h>
int main()
{
    int n,n1,n2,num,i;
    printf("enter the digit:");
    scanf("%d",&n);
    n1=-1;n2=1;
    for(i=1;i<n;i++)
    {
        num=n1+n2;
        n1=n2;
        n2=num;
        if(num==n)
        {
            printf("%d number is in fabbonacci series",n);
            break;
        }
    }
    if(i==n)
        printf("%d number is not in fabbinacci series",n);

}