#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=10000)
    {
        int a[n],b[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&a[i],&b[i]);
        }
    }
}
