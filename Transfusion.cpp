#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() {
    int T;
    ll n, s, m;
    cin >> T;
    while (T--) {
        bool flag = false;
        cin >> n >> s >> m;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }
        int prev = 0;
        for (auto& interval : v) {
            int l = interval.first, r = interval.second;
            if (l - prev >= s) {
                flag = true;
            }
            prev = max(prev, r);
        }
        if (m - prev >= s) {
            flag = true;
        }
        if (flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
