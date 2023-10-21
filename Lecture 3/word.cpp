#include<iostream>
using  namespace std;

int main() {
	char ch;
	int capital = 0;
	int small = 0;

	while (cin >> ch) {
		//cout << ch << " " << (int)ch << endl;
		if ((ch >= 'A') and (ch <= 'Z')) {
			capital = capital + 1;
		} else {
			small = small + 1;
		}
	}

	// while (cin >> ch) {
	// 	//cout << ch << " " << (int)ch << endl;
	// 	if ((ch >= 65) and (ch <= 90)) {
	// 		capital = capital + 1;
	// 	} else {
	// 		small = small + 1;
	// 	}
	// }
	cout << capital << " " << small << endl;
}



