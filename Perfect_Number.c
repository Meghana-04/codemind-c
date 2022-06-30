#include<stdio.h>
int main()
{
    int n,i,s=0,rem;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        rem=n%i;
        if(rem==0)
        {
            s+=i;
        }
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}