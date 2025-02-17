#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> clocks(n);
  for (int &i : clocks) {
    cin >> i;
  }
  for (int i = 0; i < n; i++) {
    if (clocks[i] <= i*2 || clocks[i] <= 2*(n-i-1)) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
}
