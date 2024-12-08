#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void tachChuaSo(long long num, vector<int>& S) {
    while (num > 0) {
        int a = num % 10; 
        if (find(S.begin(), S.end(), a) == S.end()) {
            S.push_back(a);
        }
        num /= 10;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int x;
        cin >> x;
        vector<long long> a(x);
        vector<int> S;

        for (int i = 0; i < x; i++) {
            cin >> a[i];
        }

        for (int k = 0; k < x; k++) {
            tachChuaSo(a[k], S);
        }

        sort(S.begin(), S.end());

        for (int i = 0; i < S.size(); i++) {
            cout << S[i];
            if (i < S.size() - 1)
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
