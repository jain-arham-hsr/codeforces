#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<long> oddDandelions;
        oddDandelions.reserve(n);
        long long sumOfEvenDandelions = 0;
        for (int i = 0; i < n; i++) {
            long numOfDandelions;
            cin >> numOfDandelions;
            if (numOfDandelions % 2 == 0) {
                sumOfEvenDandelions += numOfDandelions;
            } else {
                oddDandelions.push_back(numOfDandelions);
            }
        }
        long long maxDandelions = 0;
        if (oddDandelions.size() > 0) {
            maxDandelions += sumOfEvenDandelions;
            sort(oddDandelions.begin(), oddDandelions.end());
            maxDandelions += accumulate(oddDandelions.end() -
                                            ((oddDandelions.size() + 1) / 2),
                                        oddDandelions.end(), 0);
        }
        cout << maxDandelions << "\n";
    }
    return 0;
}
