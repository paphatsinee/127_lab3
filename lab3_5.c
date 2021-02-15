#include<stdio.h>
int main()
{
    int num,a,b=2,sum=0,c=0;
    scanf("%d",&num);
    if(0<num<10000)
    {
        a=num;
        while(a!=1)
        {
            while(a%b==0)
            {
                a/=b;
                if(a%b==0)
                {
                    sum++;
                }
                c++;
            }
            b++;
        }
        if(sum==0&&c<=3)
        {
            printf("%d is a Lucky Number.",num);
        }
        else if(sum>=1&&c<=3)
            printf("%d is not a Lucky Number.",num);
    }
    return 0;
}
