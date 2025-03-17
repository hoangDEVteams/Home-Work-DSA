#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


void solve(){
    int x,y;
    cin >> x >> y;
    if(x+1 >= y && ((x+1)-y)%9 == 0) {
        cout << "YES" << endl;
    }else{
        cout<<"NO" << endl;
    }
}

int main(){
    int T;
    cin >> T;
    while (T--)
    {
        /* code */
        solve();
    }
    
}