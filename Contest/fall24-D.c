#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    long long num;
    scanf("%lld",&num);

    int count = 0;

    long long arr[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%lld",&arr[i]);
    }

    for(int i = n-1;i >= 0 && num > 0;i--)
    {
        if(arr[i] <= num)
        {
            num = num - arr[i];
            count++;
        }
    }
    if(num == 0)
    {
        printf("%d\n",count);

    }
    else
    {
        printf("-1\n");
    }
    return 0;
}