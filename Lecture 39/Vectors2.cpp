#include<iostream>
#include<vector>
using  namespace std;
const int n = 4, m = 4;



// int Sum( int a[n][m]) {
// 	int s = 0;
// 	for (int i = 0; i < n; i += 1) {
// 		for (int j = 0; j < m; j += 1) {
// 			s += a[i][j];
// 		}
// 		cout << endl;
// 	}
// 	return s;
// }

//Pass By Reference
int Sum(vector<vector<int>>&v) {
	int s = 0;
	for (int i = 0; i < v.size(); i += 1) {
		for (int j = 0; j < v[i].size(); j += 1) {
			s += v[i][j];
		}
		cout << endl;
	}
	return s;
}

//Every Container Can  be Returned also by a function.

vector<int>Solve(vector<int>&ans) {

	vector<int>a{1, 2, 4};

	return a;
}

vector<vector<int>>Solve1() {

	vector<vector<int>>b;

	vector<int>a{1, 2, 4};
	vector<int>c{2, 34, 5};

	b.push_back(a);
	b.push_back(c);

	return b;
}




int main() {

	//cin >> n >> m;

	//Static Array:
	// int a[n][m];

	// for (int i = 0; i < n; i += 1) {
	// 	for (int j = 0; j < m; j += 1) {
	// 		cin >> a[i][j];
	// 	}
	// }

	// for (int i = 0; i < n; i += 1) {
	// 	for (int j = 0; j < m; j += 1) {
	// 		cout << a[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	//You can create a container inside another another
	//container.
	//<>: template brackets you can put containers here.

	//Vector of Vectors:
	//Array of Vectors:
	//cout << endl << endl;

	//vector<vector<int>> v; //THis is exactly Like 2-D Array.

	//v[i]: It is a Vector.

	// for (int i = 0; i < n; i += 1) {

	// 	vector<int>ans;
	// 	for (int j = 0; j < m; j += 1) {
	// 		int x;
	// 		cin >> x;
	// 		ans.push_back(x);
	// 		// cin >> v[i][j]; Wrong as size is not there.
	// 	}

	// 	v.push_back(ans);

	// }

	// vector<int>v1{1, 2, 3, 4, 5};//Size : 5
	// vector<int>v2{2, 5, 6};//Size : 3
	// vector<int>v3{1, 2, 3, 4, 5, 6, 6, 7, 8, 8, 9};//Size : 9

	// v.push_back(v1);
	// v.push_back(v2);
	// v.push_back(v3);


	// for (int i = 0; i < v.size(); i += 1) {

	// 	for (int j = 0; j < v[i].size(); j += 1) {
	// 		cout << v[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }



	// vector<vector<int>>b(n);//N Rows are there.


	// for (int i = 0; i < n; i += 1) {

	// 	for (int j = 0; j < m; j += 1) {
	// 		int x;
	// 		cin >> x;
	// 		b[i].push_back(x);
	// 	}
	// }

	// for (int i = 0; i < n; i += 1) {

	// 	for (int j = 0; j < m; j += 1) {
	// 		cout << b[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }


	vector<vector<int>>c(n, vector<int>(m));

	for (int i = 0; i < n; i += 1) {

		for (int j = 0; j < m; j += 1) {
			cin >> c[i][j];
		}
	}

	for (int i = 0; i < n; i += 1) {

		for (int j = 0; j < m; j += 1) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}

	vector<vector<int>>d(n, vector<int>(m, 0));
	// vector<vector<int>>e{{1, 2, 3, 4, 5}, {2, 3, 4},
	// 	{2, 3, 4, 5, 6, 7, 7}
	// };



	cout << Sum(c) << endl;

	vector<int>v{1, 2, 3, 4, 5};

	vector<int>ans = Solve(v);
	for (auto x : ans) {
		cout << x << " ";
	}

	cout << endl;
	vector<vector<int>>ans2 = Solve1();

	for (vector<int> x : ans2) {

		for (int y : x) {
			cout << y << " ";
		}
		cout << endl;
	}

}