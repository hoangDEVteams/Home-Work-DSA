#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main(){
    string s;
    cin >> s;
    queue<char> q;
    stack<char> freq;
    for (int i = 0; i < s.size(); ++i) {
        q.push(s[i]);
        freq.push(s[i]);
    }

    bool flag = true;
    while (!q.empty()) {
        q.front();
        freq.top();
        if( freq.top() != q.front()){
            flag = false;
            break;
        }   
        flag = true;   
        q.pop();
        freq.pop(); 
    }
    cout<<(flag ? "YES" : "NO")<<endl;
}