#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int A[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	int hasil[4][4] = { 0 };
	cout << "MATRIKS 4x4 : " << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << setw(4) << A[i][j];
		}
		cout << endl;
	}
	return 0;
}