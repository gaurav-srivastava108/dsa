#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> basis;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            for (long long b : basis) {
                x = min(x, x ^ b);
            }
            if (x) basis.push_back(x);
        }

        long long ans = 1LL << basis.size();
        cout << ans << "\n";
    }
    return 0;
}
