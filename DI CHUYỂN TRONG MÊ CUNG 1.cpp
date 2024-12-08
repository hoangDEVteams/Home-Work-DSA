#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <string> res;
int n, a[100][100];
bool check = false;
int sdf() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m, 0));
	for (int i = 0; i < m; i++) {
		int x, y; cin >> x, y;
		a[x][y] = a[y][x] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
void init() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	res.clear();
	check = false;
}
void Try(int i , int j ,string s) {
	if (i == 0 && j == 0 && a[i][j] == 0) {
		check = false;
		return;
	}
	if (i == n && j == n && a[n][n]) {
		res.push_back(s);
		check = true;
		return;
	}
	if (i < n && a[i + 1][j]) Try(i + 1, j, s + "D");
	if (j < n && a[i][j+1]) Try(i, j+1, s + "R");
	if (i < n && !a[i + 1][j] && a[i][j + 1] || i >n || j > n) return;
}
int main() {
	int T;
	cin >> T;
	while (T--)
	{
		init();
		Try(1, 1,"");
		if (!check) cout << -1;
	}
}