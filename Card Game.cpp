#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		vector<int> a(2), b(2);
		cin >> a[0] >> a[1] >> b[0] >> b[1];
		vector<pair<int, int>> suneetOrders = { {a[0], a[1]}, {a[1], a[0]} };
		vector<pair<int, int>> slavicOrders = { {b[0], b[1]}, {b[1], b[0]} };
		int suneetWins = 0;
		for (auto& suneet : suneetOrders) {
			for (auto& slavic : slavicOrders) {
				int suneetScore = 0, slavicScore = 0;
				// Round 1
				if (suneet.first > slavic.first) suneetScore++;
				if (suneet.first < slavic.first) slavicScore++;

				// Round 2
				if (suneet.second > slavic.second) suneetScore++;
				if (suneet.second < slavic.second) slavicScore++;

				// Check if Suneet wins the game
				if (suneetScore > slavicScore) {
					suneetWins++;
				}
			}
		}
		cout << suneetWins << endl;
	}
}