#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    long long int num;
    scanf("%lld",&num);

    int arr[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i <= n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            if((long long)arr[i] * arr[j] % num == 0)
            {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");

}