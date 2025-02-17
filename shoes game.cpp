#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long
void solve() {
    int n; cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        res += x;
    }
    if (res < 0) {
        cout << abs(res);
    }
    else {
        cout << res - res - res;
    }
}

int main() {
    solve();
    return 0;
}
