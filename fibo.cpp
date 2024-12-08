#include <iostream>
using namespace std;

int main() {
	long long F[100];
	F[1] = 1;
	F[2] = 1;
	for (int i = 3; i < 93; i++) {
		F[i] = F[i - 1] + F[i - 2];
	}

	int n;
	cin >> n;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		for (int j = a; j <= b; j++) {
			cout << F[j];
			if (j < b)
				cout << " ";
		}
		cout << "\n";
	}
}

