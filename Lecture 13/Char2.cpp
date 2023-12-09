#include<iostream>
using  namespace std;

int main() {


	char ch;
	int capital = 0, small = 0, extra = 0;

	//get

	// cin.get(ch);
	// cin >> ch;

	while (cin.get(ch)) {
		if (ch >= 65 and ch <= 96) {
			capital += 1;
		} else if (ch >= 97 and ch <= 122) {
			small += 1;
		} else {
			extra += 1;
		}

		cout << ch;
	}

	//cout << capital << " " << small << " " << extra << endl;
}




