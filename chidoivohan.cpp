#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <math.h>

#define ll long long
using namespace std;


void solve() {
    int n, k;
    cin >> n >> k;
    int count = 0;
    while (n > 1) { 
        if(n-k < n/2 && n > k){
            n-=k;
            count++;
        }    
        else{
            n/=2;
            count++;
        }
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