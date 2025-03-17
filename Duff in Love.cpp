#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long 

void solve(){
   
}

int main(){
    ll n;
    cin >> n;
    ll result = 1;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {  
            result *= i;  
            while (n % i == 0) { 
                n /= i;
            }
        }
    }
    
    if (n > 1) {  
        result *= n;
    }
    cout << result << endl;
    return 0;
    
}