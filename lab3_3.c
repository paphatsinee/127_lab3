#include<stdio.h>
int main()
{
    int k,sum=0,i=2;
    scanf("%d",&k);
    if(1 <= k <= 1000)
    {
        while(k!=1)
        {
            if(k%i==0)
                printf("%d\n",i);
                k/=i;
                i++;
        }
    }


    return 0;
}
