#include <iostream>
#include <queue>
using namespace std; 

int matrix[5][5] = {};


int main() {
	int x, y;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> matrix[i][j];
			if (matrix[i][j] == 1) {
				x = i + 1;
				y = j + 1;
				break;
			}
		}
	}
	int centerX = 3;
	int centerY = 3;
	int move = abs(x - centerX) + abs(y - centerY);
	cout << move << endl;
}