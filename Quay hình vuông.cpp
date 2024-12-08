#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct state
{
	int a[7];
	friend bool operator == (state A, state B) {
		return A.a[1] == B.a[1] && A.a[2] == B.a[2] && A.a[3] == B.a[3] &&
			A.a[4] == B.a[4] && A.a[5] == B.a[5] && A.a[6] == B.a[6];
	}
};
state ST, EN;
int dist[1000005], visited[1000005];// minimum distance for state ST to another state
int convertToNum(state x) {
	int ans = 0;
	for (int i = 1; i <= 6; i++)
		ans = ans * 10 + x.a[i];
	return ans;
}
state rotateRight(state x) {
	state ans;
	ans.a[1] = x.a[1];
	ans.a[2] = x.a[5];
	ans.a[3] = x.a[2];
	ans.a[4] = x.a[4];
	ans.a[5] = x.a[6];
	ans.a[6] = x.a[3];
	return ans;
}
state rotateLeft(state x) {
	state ans;
	ans.a[1] = x.a[4];
	ans.a[2] = x.a[1];
	ans.a[3] = x.a[3];
	ans.a[4] = x.a[5];
	ans.a[5] = x.a[2];
	ans.a[6] = x.a[6];
}
void BFS() {
	memset(visited, 0, sizeof(visited));
	queue<state> Q;
	Q.push(ST);
	visited[convertToNum(ST)] = 1;
	dist[convertToNum(ST)] = 0;

	while (!Q.empty())
	{
		state t = Q.front();
		Q.pop();
		if (t == EN) break;

		/// xoay trang thai sang phai
		state tmp = rotateRight(t);
		//cout << convertToNum(t) << " " << convertToNum(tmp) << endl;
		if (visited[convertToNum(tmp)] == 0) {
			Q.push(tmp);
			visited[convertToNum(tmp)] = 1;
			dist[convertToNum(tmp)] = dist[convertToNum(t)] + 1;
		}

		/// xoay trang thai sang trai
	
		
	}

	cout << dist[convertToNum(EN)] << endl;
}
int main() {
	for (int i = 1; i <= 6; i++) cin >> ST.a[i];
	for (int j = 1; j <= 6; j++) cin >> EN.a[j];
	BFS();
}