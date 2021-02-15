#include<stdio.h>
int main()
{
    int a[5][4],i,j,max=0,win=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
        if(a[i][j]>max)
        {
            max=a[i][j];
            win=i;
        }
    }
    printf("%d %d",win,max);

    return 0;
}
