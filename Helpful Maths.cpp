#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;

int main() {
	string s;
	vector<int> v;
	cin >> s;
	for (char c:s) {
		if(c!='+')
		v.push_back(c-'0');
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		if (i > 0 && i < s.length()-1) cout << "+";
		cout << v[i];
	}
}