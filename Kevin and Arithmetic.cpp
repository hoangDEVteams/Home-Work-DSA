#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> a(n);
    int odd = 0, even = 0;
    for (int &i : a) {
      cin >> i;
    }
    for (int &i : a) {
      if (i % 2 != 0) {
        odd++;
      } else {
        even++;
      }
    }
    if (even >= 1) {
      cout << odd + 1 << endl;
    } else {
      cout << odd - 1 << endl;
    }
  }
}
