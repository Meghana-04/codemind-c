#include<stdio.h>
int main()
{
    int n,arr[100],odd=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            odd++;
        }
    }
     if(odd<=2)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    return 0;
    
}