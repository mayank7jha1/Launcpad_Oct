#include<iostream>
using  namespace std;
//Logic to Implement x^y.

//Function Definition:
int PowersInInteger(int x, int y) {
	int ans = 1;
	for (int i = 1; i <= y; i += 1) {
		ans *= x;
	}

	// cout << ans << endl;
	return ans;
}

//Logic To Multiply two numbers.
//Function Prototype:
int MultiplyInIntegers(int x, int y);

int main() {
	int x, y;
	cin >> x >> y;

	//Function Call
	int t = PowersInInteger(x, y);
	cout << t << endl;

	//Function Call
	cout << PowersInInteger(x, y) << endl;

	//Function Call
	cout << MultiplyInIntegers(x, y) << endl;
}

//Function Definition.
int MultiplyInIntegers(int x, int y) {
	int ans = x * y;
	return ans;
}




