#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please input the array:\n");
    int n,i,j,t;
    int arr[3][3];
    int res[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            res[i][j]=arr[j][i];
        }
    }
    printf("Output:\n");
    printf("The array is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    printf("The ans is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
