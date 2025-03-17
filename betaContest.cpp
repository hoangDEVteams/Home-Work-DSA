#include <iostream>
#include <vector>
#define ll long long
using namespace std;
void solv1(){
    int n;
    cin >> n;
    for(int i = 1; i<=n;i++) cout<< i<< " " ;
    cout<< endl;
}

void solve2(){
    int n; cin >> n;
    vector<int> a;
    for(int i= 1; i<= n; i++){
        cout<< (i*2-1)<< " ";
    }
    cout<< endl;
}

void solve3(){
    int a,b,c;
    cin >> a >> b >> c;
    int sum =(a/4) + (b/2) + (c/4);
    cout<< sum <<endl;
}
 
void solve4(){
    int n; cin>> n;
    vector<int> a;
    if(n == 1) {
        cout<< "NO" << endl;
        return;
    }
    for(int i = 2 ; i * i <= n ; i++){
        if(n%i== 0) {
            cout<< "NO" << endl;
            return;
        };
    }
    cout<< "YES" << endl;
}
void solve5(){
    ll n; cin >> n;
    if(n==1){
        cout << 0 << " " << 1 << " " << 1 << endl;
        return;
    }
    if(n==2){
        cout << 0 << " " << 1 << " " << 1 << " "<< 2 << endl;
        return;
    }
    
    ll a = 0, b = 1, c;
    cout << a << " " << b;
    for (ll i = 2; i <= n; i++) {
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
    cout << endl;
}

void solve6(){
    ll a,b;
    cin >> a >> b;
    ll sum = 0;
    for(ll i = a; i <= b; i++){
        sum+= i*i;
    }
    cout<< sum << endl;
}
void solve7(){
    ll n,k; cin >> n >> k;
    vector<int> a;
    for(int i =1 ; i< n; i++ ){
        a.push_back(1);
    }
    a.push_back(k - a.size());
    for(int& i: a){
        cout<< i << " ";
    }
    cout << endl;
}

void solve8(){
    string s; cin >> s;
    int left = 0, right = s.size()-1;
    for(int i =0; i < s.size()-1;i++){
        if(s[left] == s[right]){
            left++;
            right--;
        }
        else{
            cout<< "NO"<<endl;
            return;
        }
    }
    cout<< "YES" <<endl;
}
void solve(){
    int n,m; cin >>n >>m;
    if(m%2!=0){
        cout<< -1 <<endl;
        return;
    }
    int chicken = (4*n-m)/2; 
    int pig = n - chicken;
    if(chicken >= 0 && pig >=0){
        cout << 0 << " " << chicken << " " << pig << endl;
        return;
    }
    cout << -1 << endl;
}

int main(){
    int T;
    cin >> T;
    while (T--)
    {
        /* code */
        solve5();
    }
}