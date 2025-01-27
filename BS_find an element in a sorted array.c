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

    int key;
    scanf("%d",&key);

    int left = 0;
    int right = n-1;
    int middle;

    while(left <= right)
    {
        middle = (left + right)/2;
        if(arr[middle] == key)
        {
            printf("%d ",middle);
            return 0;
        }
        else if (middle > left)
        {
            left = middle + 1;
        }
        else(middle < right);
        {
            right = middle - 1;
        }
        
    }
    return -1;
    //printf("not found");
}