#include<iostream>
#include<cstring>
using  namespace std;

int freq[26] = {0};
int k;


int Length(char* s) {
	int ans = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		ans += 1;
	}
	return ans;
}

void Solve(char* s) {
	int i = 0;
	int j = strlen(s) - 1;
	// cout << j << endl;
	// cout << Length(s) << endl;

	//Resolving the Obvious ? and Building My Freq
	//Array.

	while (i < j) {
		if (s[i] == '?' and s[j] == '?') {
			i += 1;
			j -= 1;
			continue;
		} else if (s[i] != '?' and s[j] == '?') {
			s[j] = s[i];

			//Put the current Character frequency
			//in Array.
			char ch = s[i];
			//Creating My Freq Array from 1 Index.

			//1-->a
			//2-->b
			//3-->c
			freq[ch - 'a' + 1] += 1;
			i += 1;
			j -= 1;

		} else if (s[i] == '?' and s[j] != '?') {
			s[i] = s[j];
			char ch = s[i];
			freq[ch - 'a' + 1] += 1;
			i += 1;
			j -= 1;
		} else if (s[i] == s[j]) {
			char ch = s[i];
			freq[ch - 'a' + 1] += 1;
			i += 1;
			j -= 1;
		} else {
			cout << "IMPOSSIBLE" << endl;
			return;
		}
	}

	if (i == j and s[i] != '?') {
		char ch = s[i];
		freq[ch - 'a' + 1] += 1;
	}

	//Irrelevent ? marks are resolved and
	//Freq Array will have build.

	while (i >= 0) {
		//Find the Maximum Character that has
		//not been used inside the string.
		while (k > 1 and freq[k] > 0) {
			k -= 1;
		}

		//Now I Know the index of the largest
		//character that has not been used in
		//string. i.e. k.

		if (s[i] == '?' and s[j] == '?') {
			s[i] = s[j] = (char)(k + 'a' - 1);
			char ch = s[i];
			freq[ch - 'a' + 1] += 1;
			i -= 1;
			j += 1;
		} else {
			i -= 1;
			j += 1;
		}
	}

	if (k == 1 and freq[k] > 0) {
		cout << s << endl;
	} else {
		cout << "IMPOSSIBLE" << endl;
	}
}


int main() {
	cin >> k;
	char s[101];
	cin >> s;
	Solve(s);
}