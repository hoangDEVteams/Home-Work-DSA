#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> x(n), y(n);
    int sum = 0;
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 1; i <= n - 1; i++)
    {
        tong += (x[i] + y[i]);
    }
    sum = 2 * (2 * m + tong);
    cout << sum << endl;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
