#include <iostream>
#include <unordered_map>
#include <sstream>
using namespace std;

bool isBf(unordered_map< char, int>& umap) {
	int l = 0;
	for (auto& x : umap) {
		if (x.second > 0)
			if (l == 0) {
				l = x.second;
			}
			if (x.second != l) {
				return false;
			}
	}
	return true;
}
int bFcount(string S, int N) {
	int count = 0;
	unordered_map<char, int> umap;
	for (int start = 0; start < N; start++) {
		for (int end =start; end < N; end++) {
			umap[S[end]]++;
			if (isBf(umap)) {
				count++;
			}
		}
	}
	return count;
}

int main() {
	int N;
	string S;
	cin >> N >> S; 
	cout << bFcount(S, N) << endl;
}