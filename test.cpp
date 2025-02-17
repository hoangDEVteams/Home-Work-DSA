#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    for (string& s : a) {
        cin >> s;
    }
    int score = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            score++;
        }
    }
    cout << score << endl;
}
