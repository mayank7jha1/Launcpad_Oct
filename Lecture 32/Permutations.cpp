/*
	Print All the permutations of the given string.
	Ex: Permutations of abc is:

	abc
	acb
	bac
	bca
	cab
	cba

*/
#include<iostream>
#include<cstring>
using  namespace std;

void Permute1(string str, int index) {

	if (index == str.length()) {
		cout << str << endl;
		return;
	}


	for (int j = index; j < str.length(); j += 1) {
		swap(str[index], str[j]);
		Permute1(str, index + 1);
	}

}

void Permute2(char* str, int index) {

	if (index == strlen(str)) {
		cout << str << endl;
		return;
	}


	for (int j = index; j < strlen(str); j += 1) {
		swap(str[index], str[j]);
		Permute2(str, index + 1);
		swap(str[index], str[j]);//Backtracking
	}

}
int main() {
	string str;
	cin >> str;
	char s[100];
	cin >> s;

	Permute1(str, 0);

	cout << endl << endl;
	Permute2(s, 0);

}

