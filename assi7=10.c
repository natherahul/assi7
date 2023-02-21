#include<stdio.h>
int main()
{
    int i,j=0,rem,n1;
    for(i=1;i<=1000;i++)
    {
        n1=i;
        while(i>0)
        {
            rem=i%10;
            j=j+rem*rem*rem;
            i=i/10;
        }
        if(n1==j)
            printf("%d ",j);
    }
}