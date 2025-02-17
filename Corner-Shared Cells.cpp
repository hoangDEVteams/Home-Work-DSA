#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int M, N, p, q;
    cin >> M >> N >> p >> q;
    int count = 0;
    for (int i = p - 1; i <= p + 1; i++) {
        for (int j = q - 1; j <= q + 1; j++) {
            if (i == p && j == q) {
                continue;
            }
            if (i >= 1 && i <= M && j >= 1 && j <= N) {
                count++;
            }
        }
    }
    cout << count << endl;
}
int main() {
    solve();
}
