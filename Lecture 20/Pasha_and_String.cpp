#include<iostream>
using  namespace std;
const int N = 1e5 + 10;

int main() {
	string s;
	cin >> s;
	int n = s.length();
	int m;
	cin >> m;

	int Prefix[N] = {0};

	//Resolving the Queries
	//i.e. I want to know konsa index kitni
	//bar swap karna hai and that too till
	//the mid point.

	for (int i = 0; i < m; i += 1) {
		int x;
		cin >> x;

		//What we are doing is
		//Formulae: for a query [l,r]=+x
		//prefix[l]=+x;
		//prefix[r+1]=-x;

		//Since Zero Based Indexing:
		Prefix[x - 1] += 1;
		//cout << x - 1 << endl;

		//We don't need this:
		//Because after the mid point
		//we don't care konsa index kitni
		//bar swap karna hain as indences come in
		//pair.

		//Prefix[r + 1 - 1] += -1;
	}

	//Take the Prefix of the Prefix array.
	//TThis will give you konsa index
	//kitni bar swap karna hain.

	// Prefix[0] = Prefix[0];
	for (int i = 1; i < (n / 2); i += 1) {
		Prefix[i] = Prefix[i - 1] + Prefix[i];
	}

	// for (int i = 0; i < n / 2; i += 1) {
	// 	cout << Prefix[i] << " ";
	// }
	// cout << endl;

	for (int i = 0; i < (n / 2); i += 1) {
		if (Prefix[i] % 2 == 1) {
			swap(s[i], s[n - i - 1]);
		}
	}

	cout << s << endl;

}