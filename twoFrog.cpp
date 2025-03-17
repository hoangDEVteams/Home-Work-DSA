#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;    

int main(){
    int T;
    cin >> T;
    while (T--)
    {
        /* code */
        int n,a,b;
        cin >> n >>a>>b;
        if(a%2==0 && b%2==0 || a%2!=0 && b%2!=0) cout << "YES" <<endl;
        else cout << "NO" <<endl;
    }
}