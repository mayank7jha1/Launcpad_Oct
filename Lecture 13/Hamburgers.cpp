#include<iostream>
#include<cstring>
using  namespace std;

//Global Variable
char Recipe[101];
int nb, ns, nc;
int pb, ps, pc;
long long r;
int sb = 0, ss = 0, sc = 0;

bool KyaHumMidAmountofHamburferBanaSakteHain(long long mid) {
	long long MidAmountOfHamburgemeBreadKaPaisa = (mid * sb - nb) * pb;

	if (MidAmountOfHamburgemeBreadKaPaisa < 0) {
		MidAmountOfHamburgemeBreadKaPaisa = 0;
	}

	long long MidAmountOfHamburgemeSausageKaPaisa = (mid * ss - ns) * ps;

	if (MidAmountOfHamburgemeSausageKaPaisa < 0) {
		MidAmountOfHamburgemeSausageKaPaisa = 0;
	}
	long long MidAmountOfHamburgemeCheeseKaPaisa = (mid * sc - nc) * pc;

	if (MidAmountOfHamburgemeCheeseKaPaisa < 0) {
		MidAmountOfHamburgemeCheeseKaPaisa = 0;
	}


	long long TotalPaisa = MidAmountOfHamburgemeBreadKaPaisa +
	                       MidAmountOfHamburgemeSausageKaPaisa + MidAmountOfHamburgemeCheeseKaPaisa;

	if (TotalPaisa <= r) {
		return true;
	} else {
		return false;
	}
}



long long Hamburger() {

	for (int i = 0; Recipe[i] != '\0'; i += 1) {
		if (Recipe[i] == 'B') {
			sb += 1;
		} else if (Recipe[i] == 'S') {
			ss += 1;
		} else {
			sc += 1;
		}
	}
	//cout << sb << " " << ss << " " << sc << endl;

	long long s = 0;
	long long e = 1e12 + 100;
	long long ans = -1;

	while (s <= e) {
		long long mid = (s + e) / 2;
		if (KyaHumMidAmountofHamburferBanaSakteHain(mid) == 1) {
			ans = mid;
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}
	return ans;
}


int main() {
	cin >> Recipe;

	// int n = 0;
	// for (int i = 0; Recipe[i] != '\0'; i += 1) {
	// 	n += 1;
	// }

	// cout << n << endl;
	int n = strlen(Recipe);
	// cout << n << endl;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;

	cout << Hamburger() << endl;

}