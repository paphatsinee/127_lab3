#include<stdio.h>
int main()
{
    int k,sum=1,i;
    scanf("%d",&k);
    if(1 <= k <= 1000)
    {
        for(i=1;i<=k;i++)
            sum *= i;

        printf("%d",sum);
    }

    return 0;
}
