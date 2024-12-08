#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    vector<long long> a(x);
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    vector<long long> L(x,1);
    for (int i = 0; i < x ; i++)
    {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i])
                L[i] = max(L[i], L[j] + 1);
        }
    }
    cout << *max_element(L.begin(),L.end());
    return 0;
}