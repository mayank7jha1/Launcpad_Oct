#include<iostream>
using  namespace std;

int main() {

	int a[5];
	int a1[5][5];
	int a2[5] = {1, 2, 3, 4, 5};
	int a3[5][5] = {{1, 2, 3}, {2, 3, 4}};
	int a4[5][5] = {{0}};

	for (int i = 0; i < 5; i += 1) {
		for (int j = 0; j < 5; j += 1) {
			cout << a3[i][j] << " ";
		}
		cout << '\n';
	}


	int a6[] = {1, 2, 3, 4, 5};
	int a7[][6] = {{1, 2, 3}, {1, 2, 3}, {3, 4, 5}};
}






