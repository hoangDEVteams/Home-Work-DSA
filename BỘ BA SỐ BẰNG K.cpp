#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--)
	{
		bool flag = false;
		long long n;
		cin >> n;
		int K;
		cin >> K;
		vector<long long> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < n - 2; i++) {
			int j = i + 1;
			int l = n - 1;
			while (j < l) {
				long long sum = a[i] + a[j] + a[l];
				if (sum == K) {
					cout << "YES\n";
					flag = true;
					break;
				}
				else if (sum < K)
				{
					j++;
				}
				else { 
					l--;
				}
			}
			if (flag) break;
		}
		if (!flag) cout << "NO \n";
	}
}