#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <math.h>
#include <queue>
#include <set>
#include <unordered_set>
#include <string>
#define ll long long
using namespace std;

void solve1() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++) {
            a[i][j] = row[j] - '0'; 
        }
    }

    vector<int> row_xor(n, 0), col_xor(m, 0);
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            row_xor[i] ^= a[i][j];
            col_xor[j] ^= a[i][j];
        }

    int row_count = 0, col_count = 0;
    for (int i = 0; i < n; i++) if (row_xor[i] == 1) row_count++;
    for (int j = 0; j < m; j++) if (col_xor[j] == 1) col_count++;

    cout << max(row_count, col_count) << endl;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int energy = 0;

    vector<int> point;
    if(n ==1 && a[0] == 1){
        cout<<0<<endl;
        return;
    }
    if(n ==1 && a[0] == 0){
        cout<<1<<endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            point.push_back(i);
        }
    }   
    if(!point.empty()){
        if (point.size() == 1)
        {
            cout<< 2 <<endl;
            return;
        }
        if(point.size() == n%2) {
            energy = point.size();
            return;
        } 
        if(point[1] - point[0] >= 1){
            energy += 2;
        }
        if( point.size() >= 3){
            for(int i = 2; i < point.size(); i++){
                if(point[i] - point[i-1] > 2){
                    energy += 2;
                }
                else{
                    energy += 1;
                }
            }
        }
        
        if(abs(point.back() - (n-1) )>1){
            energy += 2;
        }
        else if(abs(point.back() - (n-1) )== 1){
            energy += 1;
        }
    }
    else{
        energy = 3;
    }
    cout<<energy<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T; cin >> T;
    while (T--)
    {
        /* code */
        solve();
    }
    
}