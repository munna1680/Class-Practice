#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int found = 0;
    int arr[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int element;
    scanf("%d",&element);

    for(int i = 0;i < n;i++)
    {
        if(arr[i] == element)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}