#include<stdio.h>
int main()
{
    int n,sum=0,pro=1,r,sub;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        pro=pro*r;
        n=n/10;
    }
    sub=pro-sum;
    printf("%d",sub);
    return 0;
}