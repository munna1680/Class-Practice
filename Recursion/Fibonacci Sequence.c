#include <stdio.h>
int fib(int n)
int main()
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
    
}

int fib(int n)
{
    
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        printf("Fibonacci sequence of %d = %d",n,fib(i));
    }
    return 0;
}