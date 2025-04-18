#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);

    int need;
    scanf("%d",&need);

    int arr[n];
    for (int i = 0;i < n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int element;
    while (need--) 
    {
        scanf("%d", &element);

        int left = 0;
        int right = n - 1;
        int middle;
        int first = -1;

        while (left <= right) 
        {
            middle = (left + right) / 2;

            if (arr[middle] == element) 
            {
                first = middle;
                right = middle - 1;
            } 
            else if (arr[middle] < element) 
            {
                left = middle + 1;
            } 
            else 
            {
                right = middle - 1;
            }
        }

        left = 0;
        right = n - 1;
        int last = -1;

        while (left <= right) 
        {
            middle = (left + right) / 2;

            if (arr[middle] == element) 
            {
                last = middle;
                left = middle + 1;
            } 
            else if (arr[middle] < element) 
            {
                left = middle + 1;
            } 
            else 
            {
                right = middle - 1;
            }
        }

        if(first == -1 || last == -1) 
        {
            printf("-1\n");
        } 
        else 
        {
            printf("%d\n", last - first);
        }
    }
    return 0;
}
