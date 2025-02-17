#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        int left = s.find('0');
        int right = s.rfind('1');

        if (left == string::npos) { 
            cout << "1\n";
            continue;
        } else if (right == string::npos) { 
            cout << "0\n";
            continue;
        }

        int count1 = 0;
        string modified = (n > 3) ? s.substr(0, s.length() - 3) : "";

        if (n <= 3 && s != "101" && s != "110") {
            for (char c : s) {
                if (c == '1') count1++;
            }
        } 
        else if (n > 3) {
            for (char c : modified) {
                if (c == '1') count1++;
            }
        }

        if (modified + "101" == s) {
            count1 += 3;
        } else if (modified + "110" == s) {
            count1 += 2;
        }

        cout << count1 << "\n";
    }
    return 0;
}
