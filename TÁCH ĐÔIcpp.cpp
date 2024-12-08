#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;

bool toNum(string s)
{
	int ans = 0;
	for (int i = 0; i < s.size(); i++)
		ans = ans * 10 + s[i] - '0';
	return ans;
}
long long gcd(long long a, long long b) {
	while (b != 0) {
		long long temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main() {
	int T;
	cin >> T;
	while (T--)
	{
		string s;
		cin >> s;
		if (s.size() % 2 == 1) {
			cout << "INVALID";
		}
		else {
			int n = s.size();
			string a = s.substr(0, n / 2);
			string b = s.substr(n/2, n / 2);
			long long aa = (long long)toNum(a);
			long long bb = (long long)toNum(b);
			long long lcm = aa*bb / gcd(aa,bb);
			cout << lcm;
		}
	}
}