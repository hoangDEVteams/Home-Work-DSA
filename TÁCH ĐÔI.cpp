#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int n = 0;
    cin >> n;
    while (n--) {
        string x;
        cin >> x;

        int leg = x.length();

        if (leg % 2 != 0) {
            cout << "INVALID" << endl;
        }
        else {
            string l = x.substr(0, leg / 2);
            string r = x.substr(leg / 2);
            long a = stoi(l);
            long b = stoi(r);
            cout << lcm(a, b) << endl;
        }
    }
}