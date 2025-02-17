#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

void problemA() {
	string s;
	cin >> s;
	string lastchar = s.substr(s.size() - 2, 2);
	s = s.substr(0, s.size() - 2);
	if (lastchar == "us") {
		lastchar = "i";
	}
	cout << s + lastchar << endl;
}
void problemB() {
	string s;
	cin >> s;
	int count = 0;
	for (int i = 1; i < s.size(); i++) {
		if (s[i - 1] == s[i]) {
			cout << 1 << endl;
			return;
		}
	}
	cout << s.size() << endl;
}
void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for (int& i : a) cin >> i;
	for (int& i : b) cin >> i;
	int max_A = *max_element(a.begin(), a.end());
	int min_A = *min_element(a.begin(), a.end());

	int lower_bound = b[0] - max_A;
	int upper_bound = b[0] - min_A;
	for (int i = 0; i < n; i++) {
		a[i] = b[0] - a[i];
		if (a[i] < upper_bound || a[i] > lower_bound) {
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