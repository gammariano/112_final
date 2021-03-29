#include<stdio.h>
int main()
{
    int n1,n2,n3,i,j;
    scanf("%d %d %d" ,&n1,&n2,&n3);
    int s1[10][10],s2[10][10],s3[10][10];
    printf("\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d" ,&s1[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d" ,&s2[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n3;i++)
    {
        for(j=0;j<n3;j++)
        {
            scanf("%d" ,&s3[i][j]);
        }
    }

    return 0;
}
