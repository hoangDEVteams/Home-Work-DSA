#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <math.h>
#include <queue>
#define ll long long
using namespace std;

void solve1()
{
    ll k;
    cin >> k;
    if (k == 1)
    {
        cout << "YES" << endl;
        return;
    }
    cout << (k % 3 == 1 ? "YES" : "NO") << endl;
}
bool isPerfectSquare(ll x)
{
    ll root = sqrt(x);
    return root * root == x;
}
void solve()
{
    ll n;
    cin >> n;
    
    vector<ll> a(n);
    ll sum =(n*(n+1))/2;
    if (n == 1 || isPerfectSquare(sum))
    {
        cout << -1 << endl;
        return;
    }
    for (ll i = 1; i <= n; i++)
    {
        a[i-1] = i;
    }
    
    ll prefix_sum = 0;
    for(ll i = 0 ; i < n ; i++){
        prefix_sum+=a[i];
        if(isPerfectSquare(prefix_sum))
        {
            prefix_sum-=a[i];
            swap(a[i],a[i+1]);
            prefix_sum+=a[i];

        }
    }
    for(ll& i : a) cout << i << " ";
    cout<< endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        /* code */
        solve();
    }
}