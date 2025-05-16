#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, A, B;
        cin >> N >> M >> A >> B;
        vector<vector<bool>> dp(N + 1, vector<bool>(M + 1, false));
        dp[0][0] = true;

        for (int i = 1; i <= N; i++) {
            for (int j = 0; j <= M; j++) {
                if (j >= A && dp[i - 1][j - A]) {
                    dp[i][j] = true;
                }
                if (j >= B && dp[i - 1][j - B]) {
                    dp[i][j] = true;
                }
            }
        }

        cout << (dp[N][M] ? "Yes" : "No") << endl;
    }
}
