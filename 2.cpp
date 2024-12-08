#include <iostream>
using namespace std;


int max_Value() {
	int a[] = { 60,500, 10 };
	int max = a[0];
	for (int i = 0; i <= 2; i++) {
		if (max < a[i])
			max = a[i];
	}
	return max;
}
int fibonanci(int a) {
	if (a == 1 || a == 0)
		return 1;
	return fibonanci(a - 1) + fibonanci(a - 2);
}

int UCLN(int a, int b) {
	if (b == 0)
		return a;
	return 	UCLN(b,a % b);
}
string string_Reverse(string a) {
	if (a.length() <= 1) {
		return a;
	}
	return a[a.length() - 1] + string_Reverse(a.substr(1, a.length() - 2)) + a[0];
}
int main() {
	int a,b;
	cout << "nhap so a : ";
	cin >> a;
	cout << "nhap so b : ";
	cin >> b;
	string s;
	cout << "nhap string: ";
	cin >> s;
	cout << "F(" << a << ")" " = "<< fibonanci(a)<<"\n";
	cout << "UCLN: " << UCLN(a, b) << "\n";
	cout << "dao nguoc: " << string_Reverse(s) <<"\n";
	cout << "max = " << max_Value();

}