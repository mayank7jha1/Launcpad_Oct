#include<iostream>
#include<vector>
using  namespace std;

int main() {
	vector<vector<int>>v;
	int a[100][200];

	//a[i]

	//v ka har ek index ek vector hain.

	vector<int>ans = {1, 2, 3, 4, 5};
	v.push_back(ans);

	vector<int>ans1 = {2, 3, 4, 5, 6};
	v.push_back(ans1);

	v[0].push_back(30);
}