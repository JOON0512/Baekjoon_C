#include <stdio.h>
#include <string.h>

#define MAXN 500

static char X[MAXN+1][4];   // dealer's deck
static char P1[MAXN+1][4];  // player's deck P1
static char P2[MAXN+1][4];  // player's deck P2

// dp[layer][j][k]: the DP array (layer is i % 2)
static int dp[2][MAXN+1][MAXN+1];

static inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main(void)
{
    int n, p, q;
    scanf("%d %d %d", &n, &p, &q);

    // read deck X (bottom to top)
    for(int i = 0; i < n; i++) {
        scanf("%s", X[i]);
    }
    // read deck P1 (bottom to top)
    for(int i = 0; i < p; i++) {
        scanf("%s", P1[i]);
    }
    // read deck P2 (bottom to top)
    for(int i = 0; i < q; i++) {
        scanf("%s", P2[i]);
    }

    // init dp for base case i = n
    // dp[n][j][k] = 0 for all j, k
    // just memset the layer for i=n to 0:
    memset(dp[n % 2], 0, sizeof(dp[n % 2]));

    // fill i from n-1 down to 0
    for(int i = n - 1; i >= 0; i--) {
        // for each j from p down to 0
        for(int j = p; j >= 0; j--) {
            // for each k from q down to 0
            for(int k = q; k >= 0; k--) {

                // start with case "skip X[i]"
                int best = dp[(i+1) % 2][j][k];

                // if skip from P1 possible
                if(j < p) {
                    best = max(best, dp[i % 2][j+1][k]);
                }
                // if skip from P2 possible
                if(k < q) {
                    best = max(best, dp[i % 2][j][k+1]);
                }

                // if X[i] match next P1 card
                if(j < p && strcmp(X[i], P1[j]) == 0) {
                    best = max(best, 1 + dp[(i+1) % 2][j+1][k]);
                }
                // if X[i] match next P2 card
                if(k < q && strcmp(X[i], P2[k]) == 0) {
                    best = max(best, 1 + dp[(i+1) % 2][j][k+1]);
                }

                dp[i % 2][j][k] = best;
            }
        }
    }

    // answer = dp[0][0][0]
    printf("%d\n", dp[0][0][0]);
    return 0;
}
