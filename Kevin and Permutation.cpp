#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() {
  ll T, n, k;
  cin >> T;
  while (T--) {
    ll num = 1;
    cin >> n >> k;
    vector<ll> a(n, 0);
    for (int i = k - 1; i < n; i+=k) {
      a[i] = num;
      num++;
    }
    for (int i = 0; i < n; i++) {
      if (a[i] == 0) {
        a[i] = num;
        num++;
      }
    }
    for (int x : a) {
      cout << x << " ";
    }
    cout << endl;
  }
}
