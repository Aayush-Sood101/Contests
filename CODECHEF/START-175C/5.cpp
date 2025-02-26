#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
    while(T--){
        // Use unsigned long long since numbers can be as large as 1e18.
        unsigned long long a, b, c;
        cin >> a >> b >> c;
 
        // Already satisfied?
        if(a + b == c){
            cout << 0 << "\n";
            continue;
        }
 
        // Invariant: F = a XOR b XOR c.
        unsigned long long F = a ^ b ^ c;
        // Necessary condition: final state (A, B, A+B) always has even XOR.
        if(F & 1ULL){ 
            cout << -1 << "\n";
            continue;
        }
 
        // --- Try one operation solution on indices (1,2) ---
        // We want (a XOR Y) + (b XOR Y) = c.
        // Let D = a XOR b.
        // A known necessary and sufficient condition for the existence of nonnegative U,V 
        // with U + V = c and U XOR V = D is:
        //    c >= D, (c-D) is even, and ((c-D)/2 & D) == 0.
        // Here if we set U = (c - D) / 2 then we want to choose Y = a XOR U.
        unsigned long long D = a ^ b;
        if(c >= D && ((c - D) % 2ULL == 0)){
            unsigned long long U = (c - D) / 2ULL;
            if( (U & D) == 0ULL ){
                unsigned long long Y = a ^ U; // then a^Y = U and b^Y = D^U.
                if(U + ((D) ^ U) == c){
                    cout << 1 << "\n";
                    cout << 1 << " " << 2 << " " << Y << "\n";
                    continue;
                }
            }
        }
 
        // --- Otherwise, use a two-operation solution ---
        // We want to reach final state (F/2, F/2, F) because (F/2) + (F/2) = F and the invariant remains.
        unsigned long long halfF = F / 2ULL;
        unsigned long long Y1 = a ^ halfF; // Operation on indices (1,2) makes new X1 = a ^ Y1 = halfF.
        unsigned long long Y2 = a ^ b;     // Operation on indices (2,3).
 
        cout << 2 << "\n";
        cout << 1 << " " << 2 << " " << Y1 << "\n";
        cout << 2 << " " << 3 << " " << Y2 << "\n";
    }
    return 0;
}
