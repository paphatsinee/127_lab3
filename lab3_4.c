#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    if(n%2==0 || n%3==0)
    {
        if(n%2==0)
        {
            while(n%2==0)
            {
                a=n-1;
                n=n-1;
            }
            while(n%2==0)
            {
                b=n+1;
                n=n+1;
            }
            if(a>b)
                a=b;

        }
        else if(n%3==0)
        {
            while(n%3==0)
            {
                a=n-1;
                n=n-1;
            }
            while(n%3==0)
            {
                b=n+1;
                n=n+1;
            }
            if(a>b)
                a=b;
        }
        printf("%d",a);
    }
    else printf("%d",n);




    return 0;
}
