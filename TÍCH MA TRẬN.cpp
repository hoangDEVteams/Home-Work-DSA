#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m, p;
	cin >> n >> m >> p;
	vector<vector<int>> a(n, vector<int>(m));
	vector<vector<int>> b(m, vector<int>(p));
	vector<vector<int>> c(n, vector<int>(p,0));

	for (int i = 0; i < n; i++) {	
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int j = 0; j < m; j++) {
		for (int k = 0; k < p; k++) {
			cin >> b[j][k];
		}
	}
	// tạo ma trận c để lưu kết quả của tích 2 ma trận
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			for (int k = 0; k < p; k++)
				c[i][k] += a[i][j] * b[j][k];
	}

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < p; k++)
			cout << c[i][k] << " ";
		cout << "\n";
	}

}