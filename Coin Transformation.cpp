#include <csignal>
#include <iostream>
using namespace std;
void coinTranform(long long n)
{
    long long coin = 1;
    while (n >3) {
        n/=4;
        coin*=2;
    }
    cout<<coin<<endl;
}
int main(){
    long long T,n;
    cin >> T;
    while (T--) {
        cin >> n;
        coinTranform(n);
    }
}
