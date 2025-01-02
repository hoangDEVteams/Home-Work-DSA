#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main() {
    long long T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        if(n%2 == 0){
            cout<<string(n-2,'3') + "66" << endl;
        }
        else if (n == 1 || n == 3) {
            cout << -1 << endl;
        }
        else{
            cout<< string (n -5, '3') + "36366" << endl;
        }
    }
}
