#include <iostream>
#include <vector>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(3);

    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    ll sum = arr[0] + arr[1] + arr[2];
    ll fullCycles = n / sum;
    ll days = fullCycles * 3;
    ll remaining = n % sum;
    if (remaining == 0) {
        cout << days << endl;
        return;
    }

    if (remaining <= arr[0]) {
        cout << days + 1 << endl;
    }
    else if (remaining <= arr[0] + arr[1]) {
        cout << days + 2 << endl;
    }
    else {
        cout << days + 3 << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
