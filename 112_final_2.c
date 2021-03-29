#include<stdio.h>
int main()
{
    int n,i,j,sum,max=0;
    scanf("%d" ,&n);
    int looblike[n];
    for(i=0;i<n;i++)
    {
        scanf("%d" ,&looblike[i]);
    }
    for(i=0;i<n;i++)
    {
        if(looblike[i]==looblike[i+1])
        {
            max=looblike[i];
        }
    }
    printf("%d" ,max);

    return 0;
}
