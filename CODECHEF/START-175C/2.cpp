#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    
    int T; 
    cin >> T;
    while (T--) {
        int N; 
        cin >> N;
        string S[3];
        for (int i = 0; i < 3; i++) {
            cin >> S[i];
        }
        
        int count0[3] = {0}, count1[3] = {0};
        for (int i = 0; i < 3; i++) {
            for (char c : S[i]) {
                if (c == '0') count0[i]++;
                else count1[i]++;
            }
        }
        
        int total0 = count0[0] + count0[1] + count0[2];
        if (total0 != 0 && total0 != N && total0 != 2 * N && total0 != 3 * N) {
            cout << -1 << "\n";
            continue;
        }
        
        int k = total0 / N;
        int ans = 1e9;
        
        for (int mask = 0; mask < (1 << 3); mask++) {
            int cnt = 0;
            for (int i = 0; i < 3; i++) {
                if (mask & (1 << i)) cnt++;
            }
            if (cnt != k) continue;
            
            int costZeros = 0, costOnes = 0;
            for (int i = 0; i < 3; i++) {
                if (mask & (1 << i)) {
                    costZeros += count1[i];
                } else {
                    costOnes += count0[i];
                }
            }
            
            if (costZeros == costOnes) {
                ans = min(ans, costZeros);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
