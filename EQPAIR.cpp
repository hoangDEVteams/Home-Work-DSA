#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define ll long long

void sol() {
    int n;
    cin >> n;
    vt<int> a(n);
    for (int& x : a) {
        cin >> x;
    }
    vt<int> res(n + 1, 0);
    for (int i = 0; i < n; i++) {
        res[a[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (res[i] > 2) {
            while (res[i] > 1) {
                ans += res[i] - 1;
                res[i]--;
            }
        }
        else if (res[i] == 2) {
            ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    unordered_map<int, int> Q;
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += Q[a[i]];
        Q[a[i]]++;
    }
    cout << total << endl;
}
