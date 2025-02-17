<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
	int T,n;
	while (T--) {
		cin >> n;
		for (int i = 0; i < n; i++) {

		}
	}
}
=======
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> Mono(n), Stero(n);
        for (int i = 0; i < n; i++) {
            cin >> Mono[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> Stero[i];
        }
        int ans = Mono[n - 1];
        for (int i = 0; i < n - 1; ++i)
        {
            ans += max(0, Mono[i] - Stero[i + 1]);
        }
        cout << ans << endl;
    }
}
>>>>>>> 1b0a92e (dsa-cf)
