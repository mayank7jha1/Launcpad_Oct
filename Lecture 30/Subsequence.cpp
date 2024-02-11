#include<iostream>
using  namespace std;

int count = 0;
void Solve2(char* input, int i, char* output, int j) {

	if (input[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		count += 1;
		return;
	}

	//You are not Taking the current Character
	Solve2(input, i + 1, output, j);

	//You are Taking the current Character
	output[j] = input[i];
	Solve2(input, i + 1, output, j + 1);



	return;
}

int main() {
	// string s;
	// cin >> s;

	char in[100005];
	char output[100005];
	cin >> in;

	//Solve(s, 0);
	Solve2(in, 0, output, 0);
	cout << count << endl;

	// s += " Mayank";
}