#include<iostream>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<vector>
using  namespace std;


int main() {

	map<string, int>mp;
	unordered_map<string, int>ump;

	set<string>st;
	unordered_set<string>ust;

	set < pair<string, int>>st2;


	int n;
	cin >> n;

	for (int i = 0; i < n; i += 1) {
		string s;
		int x;
		cin >> s >> x;

		mp.insert({s, x});
		ump.insert({s, x});

		st.insert(s);
		ust.insert(s);

		st2.insert({s, x});

	}

	for (pair<string, int> x : mp) {
		cout << x.first << " " << x.second << endl;
	}

	cout << endl;

	for (pair<string, int> x : ump) {
		cout << x.first << " " << x.second << endl;
	}

	cout << endl;

	for (pair<string, int> x : st2) {
		cout << x.first << " " << x.second << endl;
	}

	cout << endl;

	for (string x : st) {
		cout << x << endl;
	}

	cout << endl;

	for (string x : ust) {
		cout << x << endl;
	}

	cout << endl;


	set<vector<int>>st5;


	st5.insert({1, 2, 3, 4, 5});
	st5.insert({3, 4, 5, 6, 7});
	st5.insert({1, 2, 3, 14, 5});

	//Find : Returns the Iterator and Count : True/False.

	if (mp.find("Abhinav") != mp.end()) {
		cout << "Yes" << endl;
	} else {
		cout << "NO" << endl;
	}

	if (mp.count("Abhinav") == 1) {
		cout << "YEs" << endl;
	} else {
		cout << "No" << endl;
	}

	if (st.find("Abhinav") != st.end()) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	if (st.count("Abhinav") == 1) {
		cout << "YES" << endl;
	} else {
		cout << "No" << endl;
	}


	set<int>st6 = {11, 12, 13, 14, 15, 16, 17, 18};

	//Log(n)
	cout << *lower_bound(st6.begin(), st6.end(), 18) << endl;

}






















