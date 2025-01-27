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

    int pos;
    scanf("%d",&pos);

    int left = 0;
    int right = n-1;
    int middle,first;

    while(left <= right)
    {
        middle = (left + right)/2;
        if(arr[middle] == pos)
        {
            first = middle;
            right = middle - 1;
            printf("First position is: %d\n",middle);
            return 0;
        }

        else if(arr[middle] < pos)
        {
            left = middle + 1;
        }

        else
        {
            right = middle -1;
        }
    }
    printf("%d",-1);
}