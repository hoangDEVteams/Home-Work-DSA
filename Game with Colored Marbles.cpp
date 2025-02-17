#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
#define ll long long
int solve(int n) {
    vector<int> a(n);
    unordered_map<int, int> pair;
    int u = 0, k = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pair[a[i]]++;
    }
    for (auto& i : pair) {
        if (i.second == 1) {
            u++;
        }
        else if (i.second >= 2) {
            k++;
        }
    }

    return  k + (u + 1) / 2 * 2;
}

int main() {
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        cout << solve(n) << endl;
    }
}
