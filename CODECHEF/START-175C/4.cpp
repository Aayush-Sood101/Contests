#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while(T--){
        int N;
        ll X;
        cin >> N >> X;
        vector<ll> A(N);
        for (int i = 0; i < N; i++){
            cin >> A[i];
        }
 
        unordered_map<ll, int> freq;
        for (auto &v : A)
            freq[v]++;
 
        int bestAns = 0;
        for (auto &p : freq)
            bestAns = max(bestAns, p.second);
 
        if(X == 1){
            cout << bestAns << "\n";
            continue;
        }
 
        unordered_map<ll, vector<int>> pos;
        for (int i = 0; i < N; i++){
            pos[A[i]].push_back(i);
        }
 
        for (auto &entry : pos){
            ll v = entry.first;
            ll Y = v * X;
 
            int freqY = 0;
            if (freq.find(Y) != freq.end())
                freqY = freq[Y];
 
            vector<pair<int, int>> events;
            for (int idx : pos[v])
                events.push_back({idx, 1});
            if (pos.find(Y) != pos.end()){
                for (int idx : pos[Y])
                    events.push_back({idx, -1});
            }
            sort(events.begin(), events.end(), [](auto &a, auto &b){
                return a.first < b.first;
            });
 
            int currentSum = 0, bestSegment = 0;
            for (auto &e : events){
                currentSum += e.second;
                if (currentSum < 0)
                    currentSum = 0;
                bestSegment = max(bestSegment, currentSum);
            }
 
            int candidate = freqY + bestSegment;
            bestAns = max(bestAns, candidate);
        }
 
        cout << bestAns << "\n";
    }
    return 0;
}
