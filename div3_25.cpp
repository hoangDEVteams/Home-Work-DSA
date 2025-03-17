#include <iostream>
#include <vector>
#include <unordered_map>
#define ll long long
using namespace std;

void solve1(){
    int n,k,p; cin >> n >> k >> p;
    vector<int> a(n,0);
    int sum =0,count =0;
    if(k == 0) {
        cout<< 0 << endl;
        return;
    }
    if( abs(k) == p) {
        cout<< 1 << endl;
        return;
    }
    if (k < -n * p || k > n * p) {
        cout << -1 << endl;
        return;
    }
    for(int i = 1; i <= n; i++){
        if(k >= -i*p && k <= i*p){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

void solve(){
    int n; cin >> n;
    string s ; cin >> s;
    int count_minus = 0, count_underscore = 0;
    for (ll i = 0; i < n ; i++) {
        if(s[i] == '-'){
            count_minus++;
        }
        else{
            count_underscore++;
        }
    }
    if(n <3 || count_minus == 1){
        cout<< 0 << endl;
        return;
    }
    ll minus_l = count_minus /2;
    ll minus_r = count_minus - minus_l;
    ll res = minus_l * minus_r * count_underscore;
    cout<< res << endl;
}
int main(){
    int T; cin >> T;
    while (T--)
    {
        /* code */
        solve();
    }
    
}