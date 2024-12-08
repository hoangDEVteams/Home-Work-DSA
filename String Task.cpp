#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main() {
	string s;
	cin >> s; 
	queue<char> q;
	char arr[] = { 'A', 'O', 'Y', 'E', 'U', 'I' };
	for (char c : s) {
		bool found = false;
		for (char i : arr) {
			if (toupper(c) == i) {
				found = true;
				break;
			}
		}
		if(!found)
		{
			q.push(tolower(c));
		}
	}
	while (!q.empty()) {
		cout << "." << q.front();
		q.pop();
	}
	
}