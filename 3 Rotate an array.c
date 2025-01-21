#include<stdio.h>
int main()
{
    int n,d,i,j;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d",&d);
    printf("Rotate array: ");

    for(i = d; i < d; i++)
    {
        printf("%d",arr[i]);
    }

    for(i = 0; i < d; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}