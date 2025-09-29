#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        cout << n << "\n";
        long long numOfMoves = 0;
        while (n > 1) {
            bool factorExists = false;
            for (int i = n - 1; i >= sqrt(n); i--) {
                if (n % i == 0) {
                    n /= i;
                    numOfMoves++;
                    factorExists = true;
                    break;
                }
            }
            if (!factorExists) {
                n--;
                numOfMoves++;
            }
            cout << n << "\n";
        }
        cout << "\n" << numOfMoves << "\n";
    }
    return 0;
}
