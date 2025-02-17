#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
#define ll long long

int main() {
    int T;
    cin >> T;
    while (T--) {
        string a, b;
        cin >> a >> b;
        if (a != b) {
            cout << "NO" << endl;
        }
        unordered_set<char, int> freqA,freqB;
        for (char c : a) {
            freqA[c]++;
        }
        for (char c : b) {
            freqB[c]++;
        }
        if (freqA == freqB) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
