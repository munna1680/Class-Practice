#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int count = 0;
    for (int j = n -1; j >= 0; j--) 
    {
        while (num >= arr[j]) 
        { 
            num = num - arr[j]; 
            //printf("%d ", arr[j]);
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}