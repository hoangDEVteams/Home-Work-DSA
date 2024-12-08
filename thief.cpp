#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
int main() {
	int N, W, H; cin >> N >> W >> H;
	vector <long long> w(N), c(N);
	for (int i = 0; i < N; i++)
	{
		cin >> w[i] >> c[i];
	}
	vector <long long> pa(W + 1, 0);
	
	for (int i = 0; i < N; i++)
	{
		for (int j = W; j >= w[i]; j--)
		{
			pa[j] = max(pa[j], pa[j - w[i]] + c[i]);
		}
	}
	long long Mbag = 0;
	for (int i = 0; i <= W; i++)
	{
		Mbag = max(Mbag, pa[i]);
	}
	long long rl = Mbag;
	int totalW = accumulate(w.begin(), w.end(), 0);
	if (totalW > W) {
		sort(pa.rbegin(), pa.rend());
		long long max_value = 0;
		if (pa.size() >= 2) {
			int values = 0;
			values = rl + pa[1];
		}
		else if (pa.size() == 1) {
			max_value = pa[0];
		}
	}
	cout << rl;
}