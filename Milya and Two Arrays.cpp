#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--)
    {
        /* code */
        int n;
        cin >> n;
        set<int> a,b;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.insert(x);
        }
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            b.insert(x);
        }
        cout<< (a.size() + b.size() >= 4 ?"YES" : "NO") <<endl;
    }
    
}