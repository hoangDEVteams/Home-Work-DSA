#include <iostream>
#include <algorithm>

using namespace std;
int ARR[50];
int main() {
	int n, k, count = 0;
	cin >> n >> k ;
	for (int i = 0; i < n; i++)
	{
		cin >> ARR[i];
	}
	sort(ARR,ARR+n,greater<int>());
	for (int i = 0; i < n; i++) {
		if (ARR[i] >= ARR[k - 1] && ARR[i] > 0) {
			count++;
		}
	}
	cout << count << endl;
}