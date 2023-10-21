#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	// int reverse = 0;

	// while (n > 0) {
	// 	int digit = n % 10;
	// 	reverse = reverse * 10 + digit;
	// 	n = n / 10;
	// }

	//Calculate the set bits
	int count = 0;
	while (n > 0) {
		int bit = n % 2;
		// if (bit == 1) {
		// 	count = count + 1;
		// }
		cout << bit;
		n = n / 2;
	}
	//cout << count << endl;

}