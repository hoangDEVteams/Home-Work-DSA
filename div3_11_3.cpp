#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <math.h>
#include <queue>
#include <set>
#include <unordered_set>
#define ll long long
using namespace std;

void solve1(){
    int l,r,d,u; cin >> l >> r >> d >> u;  
    cout<<((l==r && r==d && d==u) ? "YES" : "NO") <<endl;
}
void solve2(){
    int n; cin >> n;
    vector<int> a(n);
    int sum = 0;
    for(int& i: a){
        cin >> i;
        sum += i;   
    }
    cout<< sum-(n-1) <<endl;
}
void solve3(){
    ll x;
    cin >> x;
   
    if(x <= 4){
        cout << -1 << endl;
        return;
    }
    if(x == 5){
        cout << 3 << endl;
        return;
    }
    if(x == 6){
        cout << 5 << endl;
        return;
    }
    int highest_bit = 1 << (31 - __builtin_clz(x));

    int y = highest_bit - 1;
    
    int z = x ^ y;
    if (y + z > x && x + z > y && x + y > z) {
        cout << y << endl;
    } else {
        cout << -1 << endl;
    }
}
ll count_points_optimized(int xc, int r, unordered_map<int, vector<pair<int, int>>> &y_ranges) {
    for (int x = xc - r; x <= xc + r; x++) {
        int dy = sqrt(1LL * r * r - 1LL * (x - xc) * (x - xc));
        y_ranges[x].emplace_back(-dy, dy);
    }
    return 0;
}

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> x(n), r(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> r[i];

    unordered_map<int, vector<pair<int, int>>> y_ranges;
    
    for (int i = 0; i < n; i++) {
        count_points_optimized(x[i], r[i], y_ranges);
    }

    ll result = 0;
    for (auto &entry : y_ranges) {
        vector<pair<int, int>> &ranges = entry.second;
        sort(ranges.begin(), ranges.end()); 

        int y_min = ranges[0].first, y_max = ranges[0].second;
        for (auto &[l, r] : ranges) {
            if (l > y_max + 1) { 
                result += (y_max - y_min + 1); 
                y_min = l, y_max = r;
            } else {
                y_max = max(y_max, r);
            }
        }
        result += (y_max - y_min + 1);
    }

    cout << result << endl;
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