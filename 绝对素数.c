#include <stdio.h>
#include <stdlib.h>

reverse(int x)//数字反转部分
{
    int k,a,b,c,d;
    if(x<10)
    {
        k=x;
    }
    else if(x>=10 && x<100)
    {
        a=x%10;//个位
        b=x/10;//十位
        k=a*10+b;
    }
    else if(x>=100 && x<1000)
    {
        a=x%10;//个位
        b=(x/10)%10;//十位
        c=x/100;//百位
        k=a*100+b*10+c;
    }
    else if(x==1000)
    {
        k=1;
    }
    return k;
}

judge(int x)//判断素数部分
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return 1;//不是素数
        }
    }
    return 2;//是素数
}

int main()
{
    printf("Input:");
    int n,i,j,rev,t=0;
    scanf("%d",&n);
    printf("Output:\n");
    for(i=10;i<=n;i++)
    {
        rev=reverse(i);
        if(judge(i)==2 && judge(rev)==2)
        {
            printf("%d ",i);
        }
        rev=0;
    }
    return 0;
}
