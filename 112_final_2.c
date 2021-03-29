#include<stdio.h>
int main()
{
    int n,i,j,equal,max1,max2,sum1=0,sum2=0,count1=0,count2=0;
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
            max1=looblike[i];
            sum1=max1;
            count1++;
        }
    }
    for(i=0;i<n;i++)
    {

        if(sum1==looblike[i])
        {
            max2=looblike[i];
            sum2=max2;
            count2++;
        }
    }
    printf("%d" ,max1);
    if(count1==count2)
    {
        printf(" %d" ,max2);
    }

    return 0;
}
