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

    int search, count = 0;
    scanf("%d",&search);

    int left =0, right = n-1;
    int middle, value,temp = 0;

    while(left <= right)
    {
        middle = (left + right)/2;
        if(arr[middle] == search)
        {
            //temp = search;
            search = value;
            value = middle;
            
            //left = middle + 1;
            printf("%d is present at the position in %d\n",search/*error*/,value);
            count++;
        }

        else if(arr[middle] < value)
        {
            left = middle + 1;
        }

        else 
        {
            right = middle -1;
        }
    }
    if(count == 0)
    {
        printf("%d is not found\n");
    }
    printf("%d is found %d times in the array\n",search,count);
}