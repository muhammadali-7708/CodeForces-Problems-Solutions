#include <iostream>
using namespace std;
 
int shuffling(bool mat[][5]) {
	int r, c;
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			if (mat[i][j] == 1) { r = i; c = j;}
	}
	r++; c++;
	r = r - 3;
	c = c - 3;
	int shuffled = abs(r) + abs(c);
	return shuffled;
}
int main()
{
	bool mat[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cin >> mat[i][j];
	}
	cout << shuffling(mat);
	return 0;
}