#include<iostream>
using  namespace std;
int n;
char output[100];
void Solve(int index, int open_count, int close_count) {

	if (index == (2 * n)) {
		output[index] = '\0';
		cout << output << endl;
		return;
	}


	if (close_count < open_count) {
		output[index] = ')';
		Solve(index + 1, open_count, close_count + 1);
	}
	if (open_count < n) {
		output[index] = '(';
		Solve(index + 1, open_count + 1, close_count);
	}



	return;
}

int main() {

	cin >> n;
	Solve( 0, 0, 0);
}