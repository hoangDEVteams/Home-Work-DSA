#include <algorithm>
#include <vector>
#include <iostream>
#include <numeric>

#define ll long long
using namespace std;


ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int order = 0;
    int count = 0;
    bool flag = true;
    vector<int> result;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (m--) {
        order++;
        vector<ll> a_copy = a;
        flag = true;
        vector<ll> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ll g = gcd(a_copy[i], b[j]);
                if (g > 1) {
                    a_copy[i] /= g;
                    b[j] /= g;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (b[i] != 1) {
                flag = false;
                break;
            }
        }
        if (flag) {
            count++;
            result.push_back(order);
        }
    }
    cout << count << '\n';
    for (auto& x : result) {
        cout << x << " ";
    }
    return 0;
}