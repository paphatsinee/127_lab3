#include<stdio.h>
int main()
{
    int a=0,i,j,max=0,win=0;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);

        }
        if(a[i][j]>max)
        {
            max=a[j];
            win=i;
        }

    }
    printf("%d %d",win,max);

    return 0;
}
