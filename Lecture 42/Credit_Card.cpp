#include<iostream>
using  namespace std;

int n, d;
int a[20100];


void Credit_Card() {

	//We are Trying to Find if Answer exits or not.
	//For this we will put/make the BB as minimum as possible
	//on negative Bank Balance visiting day i.e. 0.
	int BankBalance = 0;

	for (int i = 0; i < n; i += 1) {
		if (a[i] == 0) {

			if (BankBalance < 0) {
				//You want to make it as min as possible.
				BankBalance = 0;
			}
		} else {

			BankBalance += a[i];
			if (BankBalance > d) {
				cout << "-1" << endl;
				return;
			}

		}
	}


	//If I am Standing Here that means My Answer exists.

	BankBalance = 0;
	int visits = 0;

	for (int i = 0; i < n; i += 1) {
		if (a[i] == 0) {
			if (BankBalance < 0) {
				BankBalance = d;
				visits += 1;
			}
		} else {
			BankBalance += a[i];
			if (BankBalance > d) {
				//Because My exits I will never let it overflow.
				BankBalance = d;
			}
		}
	}

	cout << visits << endl;
}

int main() {
	cin >> n >> d;
	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}

	Credit_Card();
}