#include <stdio.h>

int main() 
{
    int N, W;
    scanf("%d %d", &N, &W);
    
    long long dp[W + 1];
    for (int i = 0; i <= W; i++) 
    {
        dp[i] = 0;
    }

    for (int i = 0; i < N; i++) 
    {
        int w, v;
        scanf("%d %d", &w, &v);
        for (int j = W; j >= w; j--) 
        {
            long long nV = dp[j - w] + v;
            if (nV > dp[j]) 
            {
                dp[j] = nV;
            }
        }
    }

    printf("%lld\n", dp[W]);
    return 0;
}
