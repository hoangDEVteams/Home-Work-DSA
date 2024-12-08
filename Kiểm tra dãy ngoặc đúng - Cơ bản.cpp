#include <iostream>
#include <algorithm>
using namespace std;


bool isDung(string S) {
	int a = 0;
	for (char c : S) {
		if (c == '(') {
			a++;
		}
		else
		{
			a--;
		}
		if (a < 0) return false;
	}
	return a == 0;
}
int main() {
	int T;
	cin >> T;
	while (T--) {
		string S;
		cin >> S;
		if (isDung(S)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}