#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> cnt = { 1 };
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            cnt.back()++;
        }
        else {
            cnt.emplace_back(1);
        }
    }
    sort(cnt.begin(), cnt.end());
    int m = cnt.size();
    for (int i = 0; i < m - 1; i++) {
        if (cnt[i] > k) {
            cout << m - i << "\n";
            return;
        }
        k -= cnt[i];
    }
    cout << 1 << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
}