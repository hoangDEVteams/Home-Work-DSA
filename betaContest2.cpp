#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <numeric>
#include <math.h>
#include <queue>
#define ll long long
using namespace std;

void solve1(){
    int n; cin >> n;
    string s = to_string(n);
    if(n < 0){
        cout<< s.size() -2 << endl;
        return;
    }
    cout<< s.size() << endl;
}
void solve2(){
    string n; cin >> n;
    int sum = n[0] - '0'; 
    for(int i = 1 ; i < n.size() ;i++){
        sum*=(n[i]- '0');
    }
    cout<< sum << endl;
}
void solve3(){
    string n; cin >> n;
    int count =0;
    for(int i = 0 ; i < n.size() ;i++){
        if((n[i]- '0') % 2!=0) count++;
    }
    cout<< count << endl;
}
void solve4(){
    string n; cin >> n;
    vector<int> a;
    for(int i = 0 ; i < n.size() ;i++){
        a.push_back(n[i]- '0');
    }
    int min_value = *min_element(a.begin(),a.end());
    cout<< min_value << endl;
}

void solve(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for(int& i : a) cin >> i ;
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum+=a[i];
    } 
    int res = sum;
    for (int i = k; i < n; i++) {
        sum = sum + a[i] - a[i - k];
        res = max(res, sum);
    }
    if (res < 0 || n < k) res = -1;
    cout<< res << endl;
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