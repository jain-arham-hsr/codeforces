#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        unordered_map<int, bool> oddMap;
        unordered_map<int, bool> evenMap;
        bool areDisjoint = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int num;
                cin >> num;
                if ((i + j) % 2 == 0) {
                    evenMap[num] = true;
                    if (oddMap[num] == 1)
                        areDisjoint = false;
                } else {
                    oddMap[num] = true;
                    if (evenMap[num] == true)
                        areDisjoint = false;
                }
            }
        }
        int res = -!areDisjoint - 1;
        for (auto it = oddMap.begin(); it != oddMap.end(); it++) {
            if (it->second == 1) {
                res++;
            }
        }
        for (auto it = evenMap.begin(); it != evenMap.end(); it++) {
            if (it->second == 1) {
                res++;
            }
        }
        // cout << oddMap[1] << "\n";
        cout << res << "\n";
    }
    return 0;
}
