#include<iostream>
#include<cmath>
#include<iomanip>
using  namespace std;

double Derivative(double x, double b, double c) {
	return (((2 * x + b) * sin(x)) - cos(x) * (x * x + b * x + c));
}


double IsThisJee(double b, double c) {
	double s = 0;
	double e = 3.14159265 / 2;
	int count = 0;
	double ans;

	while (e - s > 1e-7) {
		double mid = (s + e) / 2;
		double value = Derivative(mid, b, c);
		if (value < 0) {
			//You cannot add integer values while
			//doing BS on floating values.
			s = mid;
			ans = mid;
		} else {
			//You will always store answer as it is your potential answer.
			e = mid;
			ans = mid;
		}
		// count += 1;
		// if (count > 100) {
		// 	return ans;
		// }
	}
	return ans;
}


int main() {
	int t;
	cin >> t;

	while (t--) {
		double b, c;
		cin >> b >> c;

		double ans = IsThisJee(b, c);
		cout << fixed << setprecision(8) <<
		     (ans * ans + b * ans + c) / sin(ans) << endl;
	}

}