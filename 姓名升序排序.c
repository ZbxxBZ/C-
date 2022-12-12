#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("请输入学生人数:\n");
    int i,k,j,n,res=0;
    scanf("%d",&n);
    int arr[n];
    printf("请输入%d个同学的成绩:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("请输入成绩区间:\n");
    int max,min;
    scanf("%d-%d",&min,&max);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=min && arr[i]<=max)
        {
            res++;
        }
    }
    printf("共有%d个同学的成绩位于区间内",res);
    return 0;
}
