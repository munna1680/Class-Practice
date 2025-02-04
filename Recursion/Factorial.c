#include<stdio.h>

long long int sum(int n);

int main() 
{
    int n;
    printf("Enter a positive integer: \n");
    scanf("%d",&n);
    printf("Factorial of %d = %lld", n, sum(n));
    return 0;
}

long long int sum(int n) 
{
    if (n>=1)
        return n*sum(n-1);
    else
        return 1;
}