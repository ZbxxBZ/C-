#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("请输入两个矩阵的行列数:\n");
    int m,n,l,i,k,j,sum;
    printf("第一个m*n矩阵:\n");
    printf("m n=");
    scanf("%d %d",&m,&n);
    printf("第二个n*l矩阵:\n");
    printf("n l=");
    scanf("%d %d",&n,&l);
    int arr1[m][n];
    int arr2[n][l];
    int res[m][l];
    printf("请输入第一个%d*%d矩阵的值:\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("请输入第二个%d*%d矩阵的值:\n",n,l);
    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(k=0;k<l;k++)
        {
            sum=0;
            for(j=0;j<n;j++)
            {
                sum+=arr1[i][j]*arr2[j][k];
            }
            res[i][k]=sum;
        }
    }
    printf("运算结果如下:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
