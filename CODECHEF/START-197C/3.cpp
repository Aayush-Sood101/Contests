#include <iostream>
#include <vector>

using namespace std;

int N;
vector<vector<int>> all_permutations;
vector<int> current;
vector<bool> used;

void backtrack() {
    if (current.size() == N) {
        all_permutations.push_back(current);
        return;
    }

    for (int i = 1; i <= N; ++i) {
        if (!used[i]) {
            used[i] = true;
            current.push_back(i);
            backtrack();
            current.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    cin >> N;

    used.assign(N + 1, false); 
    current.clear();
    all_permutations.clear();

    backtrack();

    cout << all_permutations.size() << endl;
    for (const auto& perm : all_permutations) {
        for (int num : perm)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}
