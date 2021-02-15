#include<stdio.h>
int main()
{
    int num,a;
    scanf("%d",&num);
    if(0<num<10000)
    {
        a=num,b=2;
        while(a!=1)
        {
            while(a%b==0)
            {
                a/=b;
                if(a%b==0)
                {

                }
            }
        }
    }
}
