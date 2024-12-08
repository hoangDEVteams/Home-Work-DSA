#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool ngTo(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

int main() {
	int a,b;
	cin >> a >> b;
	vector<vector<int>> M(a, vector<int>(b, 0));
	for(int i = 0; i < a; i++)
		for (int j = 0; j < b; j++) 
			cin >> M[i][j];

	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++) {
			if (ngTo(M[i][j]))
				M[i][j] = 1;
			else
				M[i][j] = 0;
		}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << M[i][j] << " ";
		}
		cout << "\n";
	}
}