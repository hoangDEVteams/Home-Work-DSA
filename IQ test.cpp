#include <iostream>
using namespace std;

int arr[100];
int main() {
	int oddCount = 0, evenCount = 0;
	int Evenindex = -1, Oddindex = -1;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0) {
			evenCount++;
			Evenindex = i + 1;
		}
		else
		{
			oddCount++;
			Oddindex = i + 1;
		}
	}
	if (evenCount > oddCount) {
		cout << Oddindex << endl;
	}
	else cout << Evenindex << endl;
}