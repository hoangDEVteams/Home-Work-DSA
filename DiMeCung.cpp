#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <stack>
#include <algorithm>
using namespace std;
#define MAX 11
#define endl '\n'

int maze[MAX][MAX];

struct mC {
    int x;
    int y;
    string str;
};
//DFS
void Move(int n) {
    vector<string> result;
    stack<mC> s;
    if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0) {
        cout << -1 << endl;
        return;
    }
    s.push({ 0, 0, "" });

    while (!s.empty()) {
        mC crt = s.top();
        s.pop();
        int x = crt.x;
        int y = crt.y;
        string str = crt.str;
        if (x == n - 1 && y == n - 1) {
            result.push_back(str);
            continue;
        }
        if (x + 1 < n && maze[x + 1][y]) {
            s.push({ x + 1, y, str + "D" });
        }
        if (y + 1 < n && maze[x][y + 1]) {
            s.push({ x, y + 1, str + "R" });
        }
    }
    sort(result.begin(), result.end());
    if (result.empty()) {
        cout << -1 << endl;
    }
    else {
        for (auto& r : result)
            cout << r << " ";
        cout << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        memset(maze, 0, sizeof(maze));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> maze[i][j];
            }
        }
        Move(n);
    }
    return 0;
}