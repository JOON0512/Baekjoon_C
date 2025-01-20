#include <bits/stdc++.h>
using namespace std;

static const int MAXN = 500;

string X[MAXN + 1];
string P1[MAXN + 1];
string P2[MAXN + 1];

int dp[2][MAXN + 1][MAXN + 1];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, q;
    cin >> n >> p >> q;

    for(int i = 0; i < n; i++){
        cin >> X[i];
    }
    for(int i = 0; i < p; i++){
        cin >> P1[i];
    }
    for(int i = 0; i < q; i++){
        cin >> P2[i];
    }

    memset(dp[n % 2], 0, sizeof(dp[n % 2]));

    for(int i = n - 1; i >= 0; i--){
        for(int j = p; j >= 0; j--){
            for(int k = q; k >= 0; k--){
                int best = dp[(i + 1) % 2][j][k];  // skip X[i]

                if(j < p) {
                    best = max(best, dp[i % 2][j + 1][k]);
                }
                if(k < q) {
                    best = max(best, dp[i % 2][j][k + 1]);
                }
                if(j < p && X[i] == P1[j]){
                    best = max(best, 1 + dp[(i + 1) % 2][j + 1][k]);
                }
                if(k < q && X[i] == P2[k]){
                    best = max(best, 1 + dp[(i + 1) % 2][j][k + 1]);
                }

                dp[i % 2][j][k] = best;
            }
        }
    }

    cout << dp[0][0][0] << "\n";
    return 0;
}
