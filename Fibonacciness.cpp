#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    int a[] = { a1 + a2, a5 - a4 };
    int count = 0;
    for (int a3 : a)
    {
        int res = 0;
        if (a3 == a1 + a2) res++;
        if (a3 == a4 - a2) res++;
        if (a3 == a5 - a4) res++;
        count = max(count, res);
    }
    cout << count << endl;
}


int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}