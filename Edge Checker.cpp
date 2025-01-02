#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if( b == 10 && a == 1){
        b%=10;
    }
    if(a + 1 == b||a == b+1) cout<<"Yes"<<endl;
    else cout<< "No" << endl;
}
