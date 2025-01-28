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

    for(int i=0;i<n;i++)
    {
        if(arr[i] == search)
        {
            printf("%d is present at the position at %d\n",search,i+1);
            count++;
        }
    }

    if(count == 0)
    {
        printf("%d is not found\n",search);
    }
    printf("%d is present %d times in the array\n",search,count);
    return 0;
}