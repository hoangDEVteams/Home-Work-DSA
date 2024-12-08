#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--)
	{
		long long a;
		cin >> a;
		for (long long i = 2; i*i <= a; i++) 
		{
			if (a % i == 0) 
			{
				int b = 0;
				while (a % i == 0)
				{
					b++;
					a /= i;
				}
				cout << i << " " << b <<"\n";
			}
		}
		if (a != 1)
			cout << a << " " << 1 << "\n";
	
	}

}