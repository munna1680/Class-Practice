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
    int middle, last;

    while(left <= right)
    {
        middle = (left + right)/2;
        if(arr[middle] == pos)
        {
            last = middle ;
            left = middle +1;
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
    printf("Last position is: %d\n",last);
    return 0;
}