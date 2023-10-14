#include<iostream>
using  namespace std;

int main() {
	int x;
	cin >> x;

	//Logic: Go from 2 - x-1 tak and check if
	//any number divide it o not!!
	int count = 2;

	while (count <= x - 1) {

		if (x % count == 0) {
			cout << "Not Prime";
			return 0;
		}

		count = count + 1;
	}

	cout << "Prime" << endl;

}



