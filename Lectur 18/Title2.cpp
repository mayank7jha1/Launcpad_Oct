#include<iostream>
#include<cstring>
using  namespace std;

int freq[26] = {0};
int k;

void Solve(char* s) {
	int i = 0;
	int j = strlen(s) - 1;

	while (i < j) {
		if (s[i] == '?' and s[j] == '?') {
			i += 1;
			j -= 1;
			continue;
		} else if (s[i] != '?' and s[j] == '?') {
			s[j] = s[i];
			char ch = s[i];
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

	while (i >= 0) {

		while (k > 1 and freq[k] > 0) {
			k -= 1;
		}

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