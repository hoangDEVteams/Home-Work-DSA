#include <iostream>
#include <vector>
#include <unordered_map>
#define ll long long
using namespace std;

void solve1(){
    ll n;
    cin >> n;
    if(n == 0 ){
        cout<< 1 << endl;
        return;
    }
    cout << (n / 15) * 3 + min(3LL, n % 15 + 1) << endl;
}

void solve(){
    int n,x,k;
    cin >> n >> x  >> k;
    string s;
    cin >> s; 

    int delta = 0, count = 0;
    int pos = x; 

    for (char c : s) {
        if (c == 'L') delta--;
        else delta++;
    }
    for (int i = 1; i <= k; i++) {
        int x = 0;
        if (s[x] == 'L') pos--;
        else pos++;
        if (pos == 0) {
            count++;
        }
        x++;
    }
    cout << count << endl;
}

int main(){
    int T; cin >> T;
    while (T--)
    {
        /* code */
        solve();
    }
    
}