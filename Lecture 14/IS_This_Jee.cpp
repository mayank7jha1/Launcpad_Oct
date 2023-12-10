#include<iostream>
#include<cmath>
#include<iomanip>
using  namespace std;

double Function(double x, double b, double c) {

	return (x * x + b * x + c) / sin(x);
}


double IsThisJee(double b, double c) {
	double s = 0;
	double e = 3.14159265 / 2.0;

	while (e - s > 1e-6) {

		double m1 = s + (e - s) / 3.0;
		double m2 = e - (e - s) / 3.0;

		if (Function(m1, b, c) > Function(m2, b, c)) {
			s = m1;
		} else if (Function(m1, b, c) < Function(m2, b, c)) {
			e = m2;
		} else {
			s = m1, e = m2;
		}
	}

	return s;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		double b, c;
		cin >> b >> c;

		double ans = IsThisJee(b, c);
		cout << fixed << setprecision(8) << Function(ans, b, c) << endl;
	}

}