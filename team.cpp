#include <iostream>
#include <string>
#include <queue>
#include <utility>
using namespace std;


int sum(int a, int b, int c) {
	return a + b + c;
}
int main() {
	int n;
	int count = 0;
	cin >> n;
	while (n--) {
		int x, y, z;
		cin >> x >> y >> z;
		if (sum(x, y, z) >= 2) count++;
	}
	cout << count<<endl;
}