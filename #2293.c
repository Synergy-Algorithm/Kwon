#include <stdio.h>

int main() {
    int n, k , i , j;
    int coins[101];
    int d[10001] = {0};

    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++) {
        scanf("%d", &coins[i]);
    }
    
    d[0] = 1;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= k; j++) {
            if (j >= coins[i]) {
                d[j] += d[j-coins[i]];
            }
        }
    }

    printf("%d\n", d[k]);

    return 0;
}
