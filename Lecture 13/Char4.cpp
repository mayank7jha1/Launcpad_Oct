#include<iostream>
using  namespace std;

int main() {
	char ch[100];
	// cin >> ch;
	// cin.getline(ch,100,'$');
	cin.getline(ch, 100);
	//cout << ch << endl;

	int capital = 0, small = 0, extra = 0;

	for (int i = 0; ch[i] != '\0'; i += 1) {

		if (ch[i] >= 65 and ch[i] <= 96) {
			capital += 1;
		} else if (ch[i] >= 97 and ch[i] <= 122) {
			small += 1;
		} else {
			extra += 1;
		}
	}

	cout << capital << " " << small << " " << extra << endl;
}