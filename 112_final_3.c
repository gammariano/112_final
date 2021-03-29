#include<stdio.h>
int main()
{
    int n1,n2,n3,i,j,rows,columns,diagonals,row1,row2,row3,column1,column2,column3,diagonal1,diagonal2,diagonal3;
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
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
        {
            row1+=s1[i][0];
            row2+=s1[i][1];
            row3+=s1[i][2];
        }
    }
    rows=row1+row2+row3;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
        {
            column1+=s1[0][j];
            column2+=s1[1][j];
            column3+=s1[2][j];
        }
    }
    columns=column1+column2+column3;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(s1[i][j]==s1[j][i])
            {
                diagonal1+=s1[i][j];
            }
        }
    }
    if(rows==columns)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
