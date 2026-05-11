#include<stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int p[], int n) {
    int dp[n + 1][W + 1];


    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i - 1] <= w)
                dp[i][w] = max(p[i - 1] + dp[i - 1][w - wt[i - 1]],
                               dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][W];
}
int main() {
    int n, W;

    printf("Enter number of items: ");
    scanf("%d", &n);

    int wt[n], p[n];

    printf("Enter weights:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &wt[i]);

    printf("Enter profits:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &p[i]);

    printf("Enter capacity of knapsack: ");
    scanf("%d", &W);

    int result = knapsack(W, wt, p, n);
    printf("Maximum value = %d\n", result);

    return 0;
}
