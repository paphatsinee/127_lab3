#include<stdio.h>
int main()
{
    int num,a,b=2,sum,c;
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
    }
}
