#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve() {
    int l, r;
    cin >> l >> r;
    if (l == 1 && r == 1) {
        cout << 1 << endl;
        return;
    }
    cout << r - l << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
}
