#include <iostream>
using namespace std;

int sum(int k){
    if(k == 0) return 0;
    return k + sum(k-1);

}
int main(){
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int tong = sum(n);
        cout << tong <<endl;
    }
}
