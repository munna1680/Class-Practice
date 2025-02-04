#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int X;
    scanf("%d",&X);

    int left = 0,right = n-1;
    int middle, result;

    while(left <= right)
    {
        middle = (left + right)/2;
        if (arr[middle] < X) 
        {
            result = middle;
            right = middle - 1;

            // if(result < X)//error
            // {
            //     printf("%d",-1);
            //     return 0;
            // }

            if (result >
             X) 
            {
                printf("Smallest number greater than X: %d\n", result);
                return 0;
            }
            
        } 
        
        else 
        {
            left = middle + 1;
        }
    }
    printf("%d\n",-1);
    return 0;
}
