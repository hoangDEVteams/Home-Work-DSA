#include <iostream>
#include <stack>
#include <vector>
#include <sstream>

#define ll long long
using namespace std;

struct Node {
    ll value;
    Node* next;
};

void push(Node*& top, ll val) {
    Node* newNode = new Node{val, top};
    top = newNode;
}

ll pop(Node*& top) {
    if (!top) {
        cerr << "Tràn\n";
        exit(EXIT_FAILURE);
    }
    ll val = top->value;
    Node* tmp = top;
    top = top->next;
    delete tmp;
    return val;
}

void sol() {
    string n;
    getline(cin, n);
    istringstream id(n);
    string c;
    Node* top = nullptr;
    while (id >> c) {
        if (c == "+" || c == "-" || c == "*" || c == "/") {
            ll b = pop(top);
            ll a = pop(top);
            ll tmp;
            if (c == "+") tmp = a + b;
            else if (c == "-") tmp = a - b;
            else if (c == "*") tmp = a * b;
            else if (c == "/") tmp = a / b;
            push(top, tmp);
        }
        else {
            ll num = stod(c);
            push(top, num);
        }
    }
    ll res = pop(top);
    cout << res << endl;
}

int main() {
    sol();
    return 0;
}

