#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
#define ll long long
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> team_Score(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> team_Score[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (team_Score[i][j] == 1)
            {
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++) {
        bool flag = true;
        for (int j = 0; j < m; j++) {
            if (team_Score[i][j] == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++) {
        bool flag = false;
        for (int j = 0; j < m; j++) {
            if (team_Score[i][j] == 1) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
