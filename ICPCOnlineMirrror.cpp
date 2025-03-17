#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <math.h>
#include <queue>
#define ll long long
using namespace std;

void solve(){
    int n,m; cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    if (m == 1) {
        cout << "YES" << endl;
        for (int j = 0; j < n; j++) {  
            cout << a[0][j] << " ";
        }
        cout << endl;
    }
    else{
        
    }
}


int main()
{
    // int T;
    // cin >> T;
    // while (T--)
    // {
    //     /* code */
    // }
    solve();
}