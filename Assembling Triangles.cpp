#include <algorithm>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;
void solve() {
    ll n;
    cin >> n;
    vector<ll> triangle(n);
    for (ll& i : triangle) {
        cin >> i;
    }
    sort(triangle.begin(), triangle.end());
    ll count = 0;
    for (ll& i : triangle) {
        if (i == 0) {
            return;
        }
    }
    for (ll i = 0; i < n - 2; i++) {

        ll k = i + 2;
        for (ll j = i + 1; j < n - 1; j++) {
            while (k < n && triangle[i] + triangle[j] > triangle[k]) {
                count += 1;
            }
        }
    }
    cout << count << endl;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
