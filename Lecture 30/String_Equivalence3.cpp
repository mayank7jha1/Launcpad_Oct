#include<iostream>
using  namespace std;
int n;


void Solve(char* output, int index, char Max_ch) {

	if (index == n) {
		output[index] = '\0';
		cout << output << endl;
		return;
	}


	for (char ch = 'a'; ch <= Max_ch; ch += 1) {
		output[index] = ch;

		if (ch == Max_ch) {
			Solve(output, index + 1, Max_ch + 1);
		} else {
			Solve(output, index + 1, Max_ch);
		}
	}

}


int main() {
	cin >> n;
	char output[11];
	Solve(output, 0, 'a');
}