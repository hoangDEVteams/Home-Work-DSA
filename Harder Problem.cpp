#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long

int main() {
  int T;
  cin >> T;
  while (T--) {
    ll n;
    vector<int> a(n+1), b(n);
    for (int i = 0; i < n; i++) {
      int k;
      cin >> k;
      if (!a[i]) {
        b[i] = k;
        a[i] = 1;
      }
    }
    queue<int> q;
    for (int i = 1; i < n; i++) {
      if (!a[i]) {
      }
    }
    for (int i = 0; i < n; i++) {
      if (!b[i]) {
        b[i] = q.front();
        q.pop();
      }
    }
    for (int i = 0; i < n; i++) {
      cout << b[i] << " ";
    }
    cout << endl;
  }
}
