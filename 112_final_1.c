#include<stdio.h>
int main()
{
    int n,k,c,i,j,num1,num2;
    scanf("%d %d" ,&n,&c);
    num1=n;
    n=n/10;
    if(n<num1)
    {
        n+=1;
        printf("%d" ,n);
    }
    else
    {
        printf("%d" ,n);
    }
    printf("%d" ,c);

    return 0;
}
