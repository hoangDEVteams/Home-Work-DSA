#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <math.h>
#include <queue>
#include <set>
#include <unordered_set>
#define ll long long
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    a.push_back(x);
    for (int &i : a)
    {
        cout << i << " ";
    }
    cout<< endl;    
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}