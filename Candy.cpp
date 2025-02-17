#include <cwchar>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    int sum = 0, max = 0;
    vector<int> Candy;
    unordered_map<int, int > freq;
    for (int i = 0; i < n; i++) {
        int c, v;
        cin >> c >> v;
        freq[c]++;
        Candy.push_back(v);
    }
    if (k == 0) {
        cout << 0 << endl;
        return;
    }
    else {

        if (freq.size() == 1) {
            cout << -1 << endl;
            return;
        }
        sort(Candy.rbegin(), Candy.rend());
        for (int i = 0; i < 2 * k; i++) {
            sum += Candy[i];
        }
    }
    cout << sum << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
