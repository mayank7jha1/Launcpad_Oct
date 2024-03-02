#include<iostream>
using  namespace std;
int a, b;


// b Computation.

int Power_Iterative() {

	int ans = 1;
	for (int i = 1; i <= b; i += 1) {
		ans *= a;
	}
	return ans;

}

int Power_Rectursive(int x) {

	if (x == b) {
		return 1;
	}

	int ans = a * Power_Rectursive(x + 1);
	return ans;

}


//Log2(b);
int FastPower(int a, int b, int mod) {

	if (b == 0) {
		return 1;
	}

	int ans = FastPower(a, b / 2, mod);

	if (b % 2 == 0) {
		ans = (ans % mod) * (ans % mod);
		ans  %= mod;
	} else {
		ans = (a % mod) * (ans % mod) * (ans % mod);
		ans  %= mod;
	}
	return ans;
}

int main() {

	cin >> a >> b;

	cout << Power_Iterative() << endl;
	cout << Power_Rectursive(0) << endl;
	int mod = 1e9 + 7;
	cout << FastPower(a, b, mod) << endl;
}