#include<iostream>
#include<map>
using  namespace std;

int main() {
	// int n = 12;
	// int a[] {1, 2, 2, 2, 2, 2, 2, 2, 2, 5};
	// //Mapping of Index and Value;

	// map<>: Key and Value ki Mapping.

	//Ordered and Unordered(Hashmaps);

	// map<key, value>mp;

	//It stores a pair of key and value.

	//Store: Element aur uski Frequency.

	// map<int, int>freq;
	// //Keys are sorted,not dublicate and key-value

	// for (int i = 0; i < n; i += 1) {
	// 	int x = a[i];
	// 	freq[x] += 1;
	// }

	// cout << freq[2] << endl;

	map<string, int>mp1;
	int n;
	cin >> n;
	//Insert Is the Function Name.


	for (int i = 0; i < n; i += 1) {
		string s; int x;
		cin >> s >> x;

		// mp1.insert(make_pair(s, x));

		mp1.insert({s, x});

		// pair<string, int>p1;
		// cin >> p1.first >> p1.second;

		// mp1.insert(p1);
	}

	cout << mp1["AMAN"] << endl;

	for (auto it = mp1.begin(); it != mp1.end(); it++) {
		cout << (*it).first << " " << it->second << endl;
	}
}
















