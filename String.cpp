#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--) {
        string s;
        int count = 0;
        cin >> s;
        for(char c : s)
        {
            if(c == '1')
            {
                count++;
            }
        }
        cout << count << endl;
    }
}
