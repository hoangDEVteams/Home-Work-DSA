#include <iostream>
using namespace std;

int main() {
	long long n, m, a;
	cin >> n >> m >> a;
	long long dai = (n + a - 1)/a;
	long long rong = (m + a - 1)/a;
	long long total = dai * rong;
	cout << total <<endl;
}