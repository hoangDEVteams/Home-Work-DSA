#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1000000000019;
int main() {
	
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		vector<long long> F(n + 1);
		F[0] = 1;
		F[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			F[i] = (F[i - 1] + F[i - 2]);
		}
		cout << F[n]%MOD <<"\n";
	}
}