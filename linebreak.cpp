#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    int sum = 0,count =0;
    for(string& c: s) cin >> c;
    for(int i = 0; i < n; i++){
        if(i ==0 && sum + s[i].size() > m){
            cout << 0 << endl;
            return;
        }
        else if(sum + s[i].size() < m){
            sum+=s[i].size();
            count++;
        }
        else if(sum + s[i].size() == m ){
            count++;
            break;
        }
        else if(sum + s[i].size() > m){
            break;
        }
    }
    cout<< count<< endl;
}

int main(){
    int T; cin >>T ;
    while (T--)
    {
        /* code */
        solve();
    }
} // namespace std;
