#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);

    int n;
    scanf("%d",&n);

    int arr[m], ar[n];
    
    for (int i = 0; i < m; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &ar[i]);
    }
    int count = 0;
    
    for (int i = m - 1; i >= 0; i--) 
    {
        while (n >= arr[i] && ar[i] > 0) 
        {
            n =n - arr[i];
            ar[i]--;
            count++;
        }
    }
    
    if (n == 0) 
    {
        printf("%d\n",count);
    } 
    else 
    {
        printf("-1\n");
    }
    return 0;
}