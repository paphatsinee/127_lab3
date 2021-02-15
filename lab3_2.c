#include<stdio.h>
int main()
{
    int n,max=0,ans;
    scanf("%d",&n);
    if(n>=1 && n<=10000)
    {
        int a[n],b[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&a[i],&b[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>=1&&a[i]<=48&&b[i]>=1&&b[i]<=50000)
            {
                for(i=0;i<n;i++)
                {
                    if(a[i]==a[i+1])
                        b[i]+=b[i+1];
                    if(b[i]>max)
                    {
                        max=b[i];
                        ans=i+1;
                    }
                }
            }
        }
        printf("%d %d",ans,max);
    }
    return 0;
}
