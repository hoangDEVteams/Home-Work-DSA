#include <iostream>
#include <algorithm>
using namespace std;
bool isIntersection(int l, int r, int L, int R) {
	return max(l, L) <= min(r, R);
}
int main() {
	int T;
	cin >> T;
	while (T--) {
		int l, r, L, R;
		cin >> l >> r >> L >> R;
		int a = r - l, b = R - L,count = 0;
        bool Intersection = isIntersection(l, r,L,R);
	    if(Intersection){
            count = abs(max(l, L) - min(r, R) );
			if (l < L || l > L) count++;
			if (r< R || r > R) count++;
		}
		else if(L > r || R < l)
		{
			count = 1;
		}
		cout << count<<endl;
	}
}

