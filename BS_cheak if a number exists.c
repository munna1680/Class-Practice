#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int element;
    scanf("%d",&element);

    int left = 0;
    int right = n-1;
    int middle;

    while(left <= right)
    {
        middle = (left + right)/2;
        if(arr[middle] == element)
        {
            printf("YES\n");
            return 0;
        }
        else if(arr[middle] < element)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    printf("NO\n");
}