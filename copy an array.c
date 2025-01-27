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

    int m;
    scanf("%d",&m);

    int ar[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&ar[i]);
    }

    int arrr[n+m];
    for(int i=0;i<n;i++)
    {
        arrr[i]=arr[i];
    }

    int i=n;
    for(int j=0;j<m;j++)
    {
        arrr[i]=ar[j];
        i++;
    }

    for(int i=0;i<n+m;i++)
    {
        printf("%d ",arrr[i]);
    }

    return 0;
}