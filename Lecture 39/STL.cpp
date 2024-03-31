#include<iostream>
#include<vector>
using  namespace std;



//Sum of the Vector:

//Pass By Value
// int Sum(vector<int>ans) {

// 	int s = 0;
// 	for (int i = 0; i < ans.size(); i += 1) {
// 		s = s + ans[i];
// 	}
// 	return s;
// }


//Pass By Reference
int Sum(vector<int>&ans) {

	int s = 0;
	for (int i = 0; i < ans.size(); i += 1) {
		s = s + ans[i];
	}
	return s;
}

int main() {
	//Static Arrays:
	int a[5] {1, 2, 3, 4, 5};//Direct List Initialisation
	int b[5] = {1, 2, 3, 4, 5};//Copy List Initialisation

	// a[10];//Wrong.

	//Dynamic Array:

	int *ptr = new int[5];


	vector<int>v;

	//Input :
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	cout << v[0] << " " << v[1] << " " << v[2] << endl;

	vector<int>v1;
	int n;
	cin >> n;

	for (int i = 0; i < n; i += 1) {
		int x;
		cin >> x;
		v1.push_back(x);

		//cin>>v[i]: Wrong Because aapne size nahi diya hain
	}


	for (int i = 0; i < n; i += 1) {
		cout << v1[i] << " ";
	}

	cout << endl;

	vector<int>v2(5);
	for (int i = 0; i < n; i += 1) {
		cin >> v2[i];
	}


	for (int i = 0; i < n; i += 1) {
		cout << v2[i] << " ";
	}

	vector<int>v3 = v2;

	vector<int>v4{1, 2, 3, 4, 5};//Direct List

	vector<int>v5 = {1, 2, 3, 4, 5};//Copy List

	//Ek Container Par Iterate karne ke kaafi tareeke hain.

	//3 Ways:

	//For Loop,For Each Loop (When  You want to Print Each and
	//Every Element) and Iterator se.

	cout << endl;

	for (int x : v5) {
		cout << x << " ";
	}
	cout << endl;

	//Iterator : Addrress:

	//.begin(): This returns me the address of the first
	//bucket.

	//.end(): This returns me the address of the last bucket+1.

	for (vector<int>::iterator it = v5.begin(); it != v5.end(); it += 1) {
		cout << (*it) << " ";
	}

	cout << Sum(v5) << endl;

	cout << v5.size() << endl;
	cout << v5.capacity() << endl;


}