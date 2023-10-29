#include<iostream>
#include<climits>
using  namespace std;


//Task 1: Finding the Min Element and its Index.
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//This will store the Minimum Element.
	//For the time being we are initialising it
	//with Infinity or the max value of integer
	//as we want to make sure the comparison
	//results as the min element.

	int Mini = INT_MAX;
	int Minimum_Index = -1;

	//Iterating over the given list of integers
	//and compaing each one to mini as to find the
	//min element.

	for (int i = 0; i < n; i += 1) {

		if (a[i] < Mini) {
			Mini = a[i];
			Minimum_Index = i;
		}
	}

	cout << Mini << endl;
	cout << Minimum_Index << endl;

	int Minimum_Index2 = 0;

	for (int i = 1; i < n; i++) {
		if (a[i] < a[Minimum_Index2]) {
			Minimum_Index2 = i;
		}
	}

	cout << Minimum_Index2 << endl;
}





