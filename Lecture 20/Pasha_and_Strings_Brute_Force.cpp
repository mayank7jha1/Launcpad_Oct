#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using  namespace std;

// void My_Reverse(char* s) {
// 	int start = 0;
// 	int end = strlen(s) - 1;

// 	while (start <= end) {
// 		swap(s[start], s[end]);
// 		start += 1;
// 		end -= 1;
// 	}
// }

// void My_Reverse(string s) {
// 	int start = 0;
// 	int end = s.length() - 1;

// 	while (start <= end) {
// 		swap(s[start], s[end]);
// 		start += 1;
// 		end -= 1;
// 	}
// 	cout << s << endl;
// }


// string My_Reverse(string s) {
// 	int start = 0;
// 	int end = s.length() - 1;

// 	while (start <= end) {
// 		swap(s[start], s[end]);
// 		start += 1;
// 		end -= 1;
// 	}
// 	//cout << s << endl;
// 	return s;
// }

void My_Reverse(string &s) {
	int start = 0;
	int end = s.length() - 1;

	while (start <= end) {
		swap(s[start], s[end]);
		start += 1;
		end -= 1;
	}
	//cout << s << endl;
	return;
}

int main() {
	string s;
	//char s[100005];
	cin >> s;

	//reverse(s.begin(), s.end());
	// string str = My_Reverse(s);
	// cout << s << endl;
	// cout << str << endl;
	My_Reverse(s);
	cout << s << endl;
}