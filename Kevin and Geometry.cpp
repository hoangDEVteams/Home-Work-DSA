#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> edges;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        edges[a[i]]++;
    }
    vector<int> valid, track;
   
    for (auto &i : edges)
    {
        if (i.second == 4)
        {
            cout << i.first << " " << i.first << " " << i.first << " " << i.first << endl;
            return;
        }
        if (i.second >= 2 ){
            valid.push_back(i.first);
        }
        if(valid.size() == 2) break;
        if(i.second == 1) track.push_back(i.first);
    }
    if (valid.size() >= 2)
    {
        cout << valid[0] << " " <<valid[0] << " " << valid[1] << " " << valid[1] << endl;
        return;
    }
    if (valid.size() == 1)
    {
        int c = valid[0];
        if(track.size() ==1 ){
            if(track[0] == 2*c){
                cout << c << " " << c << " " << c << " " << track[0] << endl;
                return;
            }
        }
        sort(track.begin(),track.end());
        for (size_t i = 1; i < track.size(); i++)
        {
            if (abs(track[i] - track[i - 1]) < 2 * c)
            {
                cout << c << " " << c << " " << track[i - 1] << " " << track[i] << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        /* code */
        solve();
    }
}