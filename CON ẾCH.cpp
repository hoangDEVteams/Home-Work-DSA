#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll F[51];
	F[1] = 1;
	F[2] = 2;
	F[3] = 4;
	F[4] = 7;
	F[5] = 13;
	for (int i = 6; i < 51; i++) {
		F[i] = F[i - 1] + F[i - 2] + F[i - 3];

	}
	int t, n; cin >> t; while (t--) {
		cin >> n;
		cout << F[n] << endl;
	} 

}