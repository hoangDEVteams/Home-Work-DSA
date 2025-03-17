#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void WasthereanArray(){
    int n;
    cin >> n;
    vector<int> b(n-2);
    for(int& i : b) cin >> i;
    if(n == 3){
        cout<<"YES"<<endl;
        return;
    } 
    bool flag = true;
    for(int i =3 ; i <= n -2; i++)
    {
        int x = i -2;
        if(b[x -1] ==1 && b[x+1] == 1 && b[x] == 0 ){
            flag = false;
            break;
        }
    }
    cout << (flag ? "YES" : "NO") << endl;
}

void solve(){
    int n,m;
    cin >> n >> m;
    unordered_map<int,int> freq;
    vector<vector<int>> matrix(n,vector<int>(m));
    unordered_map<int,bool> neighbor;

    for(int i = 0; i < n; i++ ) {
        for(int j = 0; j < m; j++ ){
            cin >> matrix[i][j];
            freq[matrix[i][j]]++;
        }
    } 
    if(n ==1 && m ==1){
        cout<<0<<endl;
        return;
    } 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int color = matrix[i][j];
            if (i > 0 && matrix[i - 1][j] == color) neighbor[color] = true;
            if (j > 0 && matrix[i][j - 1] == color) neighbor[color] = true;
        }
    }

    int total = 0;
    int maxFreq = 0;
    for (auto &p : freq) {
        int color = p.first;
        int steps = neighbor[color] ? 2 : 1;
        total += steps;   // Tính tổng tất cả v_c
        maxFreq = max(maxFreq,steps); // Lấy max(v_c)
    }
    cout << (total - maxFreq) << endl;
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