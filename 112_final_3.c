#include<stdio.h>
int main()
{
    int n1,n2,n3,i,j,row1,row2,row3,row4,row5,column1,column2,column3,column4,column5,diagonal1,diagonal2,diagonal3,diagonal4,diagonal5;
    int rows1,rows2,rows3,columns1,columns2,columns3,diagonals1,diagonals2,diagonals3;
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
    /*for(i=0;i<n2;i++)
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
    */for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
        {
            row1+=s1[i][j];
            column1+=s1[j][i];
            if(s1[i][j]==s1[j][i])
            {
                diagonal1+=s1[i][j];
            }
        }
    }
    for(i=3;i>0;i--)
    {
        for(j=0;j<n1;j++)
        {
                diagonal1+=s1[i][j];
        }
    }
    if(row1==column1&&row1==diagonal1&&column1==diagonal1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
