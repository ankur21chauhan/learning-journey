// g++ -std=c++23 -O2 solution.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        // Determine minimal |an - a1| and build lexicographically smallest filled array
        long long ans;
        // Case both endpoints known
        if (a[0] != -1 && a[n-1] != -1) {
            ans = llabs(a[n-1] - a[0]);
            // fill other -1s with 0 for lexicographically smallest
            for (int i = 0; i < n; ++i)
                if (a[i] == -1) a[i] = 0;
        } else {
            // At least one endpoint is -1 -> we can make an == a1 -> ans = 0
            ans = 0;
            // If a[0] is -1 and a[n-1] is known -> set a[0] = a[n-1]
            if (a[0] == -1 && a[n-1] != -1) {
                a[0] = a[n-1];
            }
            // If a[n-1] is -1 and a[0] is known -> set a[n-1] = a[0]
            else if (a[n-1] == -1 && a[0] != -1) {
                a[n-1] = a[0];
            }
            // If both endpoints are -1 -> choose both = 0 (lexicographically smallest)
            else if (a[0] == -1 && a[n-1] == -1) {
                a[0] = 0;
                a[n-1] = 0;
            }
            // Fill all remaining -1s with 0 (to keep array lexicographically smallest)
            for (int i = 0; i < n; ++i)
                if (a[i] == -1) a[i] = 0;
        }

        // Output
        cout << ans << '\n';
        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}
