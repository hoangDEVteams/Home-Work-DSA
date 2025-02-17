#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
#define ll long long

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> question(m), know(k);
    for (int i = 0; i < m; i++) {
      cin >> question[i];
    }
    for (int i = 0; i < k; i++) {
      cin >> know[i];
    }
    unordered_set<int> AC;
    for (int i = 0; i < k; i++) {
      AC.insert(know[i]);
    }
    int l = k;
    for (int i = 0; i < m; i++) {
      if (l == n || (l == n - 1 && AC.find(question[i]) == AC.end())) {
        cout << 1;
      } else {
        cout << 0;
      }
    }
    cout << endl;
  }
}
