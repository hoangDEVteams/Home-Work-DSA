#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    vector<int> local;
    if(n == 1 && m ==1  ){
        cout<< 1 << endl;
        return;
    }
    for(int j = 0 ; j < m ; j++){
        for(int i = 0 ; i < n ; i++){
            int x = 0;
            if(a[i][j] == x){
                x++;
                local.push_back(i);
                cout << endl;
                cout<< i+1 << " ";
                cout << endl;
            }
        }
    }   
    
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