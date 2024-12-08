#include <iostream>
#include <string>
#include <vector>
using namespace std;

string nhiPhan(string s) {
    int n = s.size();
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '0') {
            s[i] = '1';
            for (int j = i + 1; j < n; j++) {
                s[j] = '0';
            }
            return s;
        }
    }
    return string(n , '0');
}

int main() {
	int T;
	cin >> T;
	while (T--)
	{
		string s;
		cin >> s;
		cout << nhiPhan(s) <<"\n";
	}
}