#include<iostream>
#include<vector>
using  namespace std;

void Sum(vector<int>ans) {
	ans[3] = 10000;
	int sum2 = 0;
	for (int i = 0; i < ans.size(); i += 1) {
		sum2 += ans[i];
	}
	cout << sum2 << endl;

}

void Sum3(vector<int>&ans) {

	ans[3] = 10000;

}

vector<int>Change(vector<int>a1) {
	vector<int>ans = a1;
	ans[3] = -10000;
	return ans;
}




int main() {

	vector<int>v1{10, 20, 30, 40, 50};
	vector<int>v2 = v1;

	Sum(v2);
	Sum3(v1);
	cout << endl;

	for (auto x : v1) {
		cout << x << " ";
	}


	vector<int>v3(5, 10);

	vector<int>a2 = Change(v3);
	cout << endl;
	for (auto x : a2) {
		cout << x << " ";
	}

}