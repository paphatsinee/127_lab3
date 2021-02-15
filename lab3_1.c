#include<stdio.h>
int main()
{
    int a,b,i,j,max=0,win=0;
    for(i=1;i<=5;i++)
    {
        a=0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&b);
            a+=b;
        }
        if(a>max)
        {
            max=a;
            win=i;
        }

    }
    printf("%d %d",win,max);

    return 0;
}
