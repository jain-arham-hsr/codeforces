#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int currentNum = 2;
    bool needsMultiplication = false;
    int lastFactorPower;
    while ( n > 1) {
        int primeFactorPower = 0;
        while (n % currentNum == 0) {
            primeFactorPower++;
        }
        if (primeFactorPower != 0) {
            lastFactorPower = primeFactorPower;
        }
        if ()

    }
    
    return 0;
}
