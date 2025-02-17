#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--) {
        int n,m;
        cin >> n >> m;
        cout<< max(m,n) +1 <<endl;
    }
}
