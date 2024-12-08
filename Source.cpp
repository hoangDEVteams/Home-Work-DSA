#include <iostream>
#include <vector>
using namespace std;

string string_Reverse( string a) {
	if (a.length() <= 1)
		return a;
	return a[a.length() - 1] + string_Reverse(a.substr(1,a.length() - 2)) + a[0];
}

int main() {
	string s;
	cout << "nhap chuoi: ";
	cin >> s;
	cout << "dao nguoc la: " << string_Reverse(s);
}

string ching() {
	int n;
	cin >> n;
	vector<int> dp(n);
	// nh?p giá tr? cho t?ng ph?n t?
	for (int i = 0; i < n; i++)
		cin >> dp[i];
	// m?ng có n ph?n t? và m?i ph?n t? ???c gán giá tr? là 1
	vector<int> L(n, 1);
}