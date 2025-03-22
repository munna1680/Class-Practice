#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    while (1)
    {
        if (scanf("%d", &x) != 1 || x <= 0)
        {
            printf("Invalid input. Please enter a positive integer.\n");
            while (getchar() != '\n');
            continue;
        }
        break;
    }
    
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }

    int lis[x];
    for (int i = 0; i < x; i++)
    {
        lis[i] = 1;
    }

    int max_lis = 1;
    for (int i = 1; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i] && lis[j] + 1 > lis[i])
            {
                lis[i] = lis[j] + 1;
            }
        }
        if (lis[i] > max_lis)
        {
            max_lis = lis[i];
        }
    }

    printf("Length of lis is %d", max_lis);

    return 0;
}