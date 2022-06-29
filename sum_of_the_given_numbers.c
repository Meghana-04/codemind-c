#include<stdio.h>
int main()
{
    int n,s[10],v[10],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&s[i],&v[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=s[i]+v[i];
        printf("%d
",sum);
    }
    return 0;
}