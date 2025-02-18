#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n; 
    char c;
    scanf("%d", &n);

    char arr[n];
    int ar[n];
    scanf("%c",&c);
    for (int i = 0; i < n; i++) 
    {
        scanf("%c %d",&arr[i],&ar[i]);
        scanf("%c",&c);
        //printf("%c %d\n",arr[i],ar[i]);
    }

    char need[n];
    int size = 0;
    scanf("%[^\n]s",need);
    //scanf("%[^\n]s",need);
    //printf("%d",strlen(need));
    int f=0,num=0;
    for(int i = 0;i < strlen(need); i++)
    {
        if(need[i]==' ')
        {
            f=0;
            for(int j=0;j<n;j++)
            {
                if(ar[j]==num)
                {
                    printf("final %c\n",arr[j]);
                }
            }
            num=0;
            continue;
        }
        if(f<1)
        {
            int temp=need[i]-'0';
            f=f+1;
            num=temp;
            printf("f1  %d %d\n",num,temp);
        }
        else if(f>=1)
        {
            int temp=need[i]-48;
            f=f+1;
            num=num*10;
            num=num+temp;
            printf("f2  %d %d\n",num,temp);

        }
        

    }
    printf("\n");

    return 0;
}
