#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <math.h>
#include <queue>
#define ll long long
using namespace std;

void solve1(){
    int n, x; cin >> n >> x;
    vector<int> a(n);
    int sum =0 ;
    for(int& i : a){
        cin >> i;
        sum += i;
    }

    if(n == 1 && a[0] == x){
        cout << "YES" << endl;
        return;
    }
    if (sum % n == 0 && sum / n == x) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

void solve(){
    int n,k; cin >> n >> k; 
    vector<int> a(n+1);
    if(k % 2 == 1) {
        for (int i = 1; i < n; i++) {
            a[i] = n;
        }
        a[n] = n - 1;
    } else {
        if(n == 2) {
            a[1] = 2; 
            a[2] = 1;
        } else {
            for (int i = 1; i <= n; i++) {
                a[i] = n - 1;
            }
            a[n - 1] = n;
            a[n] = n - 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int T; cin >> T;
    while (T--)
    {
        /* code */
        solve();
    }
    
}