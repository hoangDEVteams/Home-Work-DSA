#include <iostream>
#include <set>

using namespace std;

int main() {
	string s;
	cin >> s;
	set<char> Set;
	for (char c : s) {
		Set.insert(c);
	}
	if (Set.size()% 2 != 0) {
		cout << "IGNORE HIM!"<<endl;
	}
	else
	{
		cout << "CHAT WITH HER!"<<endl;
	}
	
}