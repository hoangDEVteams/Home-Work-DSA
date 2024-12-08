#include <iostream>
#include <vector>
using namespace std;

int n, m;
int a[1001][1001];
vector <int> adj[1001];
vector<pair<int, int>> edge;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 1; j <= n; j++) {
			/*
			*  if (a[i][j] && i < j) {
				edge.push_back({ i,j });
			}
			*/
			if (a[i][j]) {
				adj[i].push_back(j);
			}
		}
	}
	//for (auto it : edge) cout << " " << it.second << endl;
	/*
	* for (int i = 0; i <= n; i++) {
		cout << i << " : ";
		for (int x : adj[i]) {
			cout << x << " ";
		}
		cout << endl;
	}
	*/
}