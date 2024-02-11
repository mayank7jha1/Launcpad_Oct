#include<iostream>
using  namespace std;

void Solve(char* output, int index, int Max) {

	if (index == 3) {
		output[index] = '\0';
		cout << output << endl;
		return;
	}

	for (char ch = st; ch <= Max; ch++) {
		Solve(output, index, st);
	}

}

int main() {
	char output[100];
}






