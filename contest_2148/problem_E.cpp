#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> counts(n, 0);
        vector<int> input(n);
        int res = 0;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            counts[num]++;
            input.push_back(num);
        }
        bool hasAwesomeSubarrays = true;
        for (auto &x : counts) {
            if (x % k != 0) {
                cout << 0;
                hasAwesomeSubarrays = false;
            }
            x /= k;
        }
        if (!hasAwesomeSubarrays)
            continue;
        vector<int> currentCounts = counts;
        int l = 0, r = 0;
        while (r < n) {
            if (counts[input[r]] > 0) {
                counts[input[r]]--;
            } else {
                int n = r - l;
                res += n * (n + 1) / 2;
                l = r;
                currentCounts = counts;
            }
            r++;
        }
    }
    return 0;
}
