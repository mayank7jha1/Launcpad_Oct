#include<iostream>
#include<climits>
using  namespace std;

//User is going to give you n numbers and you
//have to tell the maximum and minimum out of them.

int main() {

	int n;
	cin >> n;
	int x;
	int maxi = INT_MIN, mini = INT_MAX;

	int count = 1;

	while (count <= n) {
		cin >> x;

		if (x > maxi) {
			maxi = x;
		}

		if (x < mini) {
			mini = x;
		}

		count = count + 1;
	}

	cout << maxi << " " << mini << endl;
}




