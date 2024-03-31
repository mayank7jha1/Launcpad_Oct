#include<iostream>
// #include<map>
#include<unordered_map>
#include<vector>
#include<algorithm>
using  namespace std;



int main() {
	// map<key,value>mp;
	int n;
	cin >> n;
	vector<pair<string, int>>v;
	unordered_map<string, int>mp;

	for (int i = 0; i < n; i += 1) {
		string s;
		int x;
		cin >> s >> x;
		v.push_back({s, x});
		// v.push_back(make_pair(s, x));
		mp.insert({s, x});
	}

	for (pair<string, int>x : v) {
		cout << x.first << " " << x.second << endl;
	}
	cout << "------------------" << endl;
	for (pair<string, int> x : mp) {
		cout << x.first << " " << x.second << endl;
	}
	cout << "------------------" << endl;

	for (unordered_map<string, int>::iterator it = mp.begin();
	        it != mp.end(); it++) {

		cout << (*it).first << " " << it->second << endl;
	}


	// find()

	//vector<int>v1{1, 2, 3, 4, 5};

	// for (int i = 0; i < v.size(); i += 1) {
	// 	if (v[i].first == "Mayank") {

	// 	}
	// }

	if (mp.find("Mayank") != mp.end()) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	//O(1): Average
	if (mp.count("Mayank") == 1) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	mp["Mayank"] = 4590;

}


