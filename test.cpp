#include <cmath>
#include <iostream>
#include <queue>
#include <string>
using namespace std;

void generateNumbers(long long n, long long& result) {
    queue<string> q;
    q.push({ '3' });
    q.push({ '6' });
    while (!q.empty()) {
        string current = q.front();
        q.pop();
        if (current.length() == n) {
            long long number = stoll(current);
            if (number % 33 == 0 && number % 66 == 0) {
                if (result == -1 || number < result) {
                    result = number;
                }
            }
        }
        else {
            q.push(current + '3');
            q.push(current + '6');
        }
    }
}
void solve(int n) {
    if (n <= 1 || n == 3) {
        cout << -1 << endl;
        return;
    }
    long long result = -1;
    generateNumbers(n, result);
    cout << result << endl;
}

int main() {
    long long T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        solve(n);
    }
}
