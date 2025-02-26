#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        string S;
        cin >> S;
        int n = S.size();
        
        if(n == 1){
            cout << 0 << "\n";
            continue;
        }
        
        bool isAlt = true;
        for (int i = 1; i < n; i++){
            if(S[i] == S[i-1]){
                isAlt = false;
                break;
            }
        }
        if(isAlt){
            cout << 0 << "\n";
            continue;
        }
        
        int count0 = 0, count1 = 0;
        for (char ch : S){
            if(ch == '0')
                count0++;
            else
                count1++;
        }
        
        bool valid;
        if(n % 2 == 0)
            valid = (count0 == count1);
        else
            valid = (abs(count0 - count1) == 1);
        
        if(valid){
            cout << 1 << "\n";
            continue;
        }
        
        int diff = abs(count0 - count1);
        int ans;
        if(n % 2 == 0)
            ans = (diff == 2 ? 2 : 3);
        else
            ans = (diff == 3 ? 2 : 3);
        
        cout << ans << "\n";
    }
    return 0;
}
