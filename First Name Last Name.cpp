#include <iostream>
#include <string>
using namespace std;
#define ll long long

int main()
{
    int T;
    cin >> T;
    while (T--) {
        string s, f, l;
        cin >> s >> f >> l;
        if (l + f == s)
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
