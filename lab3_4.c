#include<stdio.h>
int main()
{
    int n,a,b,c,a1=0,b1=0;
    scanf("%d",&n);
    if((n%2==0 || n%3==0)&&(n!=2||n!=3))
    {
            c=n;
            while(c%2==0||c%3==0||c%5==0||c%7==0)
            {
                a=c-1;
                c=c-1;
            }
            c=n;
            while(c%2==0||c%3==0||c%5==0||c%7==0)
            {
                b=c+1;
                c=c+1;
            }
            a1=n-a;
            b1=b-n;
            if(a1>b1)
                a=b;

        printf("%d",a);
    }
    else printf("%d",n);





    return 0;
}
