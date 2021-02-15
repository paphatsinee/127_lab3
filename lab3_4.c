#include<stdio.h>
int main()
{
    int n,a,b,c,a1,b1;
    scanf("%d",&n);
    if(n%2==0 || n%3==0)
    {
        c=n;
        if(n%2==0)
        {

            while(c%2==0)
            {
                a=c-1;
                c=c-1;
            }
            while(c%2==0)
            {
                b=c+1;
                c=c+1;
            }
            a1=n-a;
            b1=b-n;
            if(a1>b1)
                a=b;

        }
        else if(n%3==0)
        {
            while(c%3==0)
            {
                a=c-1;
                c=c-1;
            }
            while(c%3==0)
            {
                b=c+1;
                c=c+1;
            }
            a1=n-a;
            b1=b-n;
            if(a>b)
                a=b;
        }
        printf("%d",a);
    }
    else printf("%d",n);





    return 0;
}
