#include<iostream>
using  namespace std;

int main() {
	int a[] = {11, 2, 3, 10, 5, 7};
	int n = 6;
	//Basic Approach
	int b[6] = {0};
	for (int i = 0; i < n; i += 1) {
		b[n - i - 1] = a[i];
	}

	for (int i = 0; i < n; i += 1) {
		cout << b[i] << " ";
	}
	//Better Approach:

	for (int i = 0, j = n - 1; i < j; i += 1, j -= 1) {
		swap(a[j], a[i]);
	}

	/*
		int a=10,b=20;
		cout<<max(a,b)<<endl;//Prints the value of
		b i.e. 20;
		cout<<min(a,b)<<endl;//Prints the value of
		a i.e. 10;
		cout<<swap(a,b)<<endl;//Prints the value of
		a as 20 and b as 10 i.e swaps them;

	*/
	cout << endl;
	for (int i = 0; i < n; i += 1) {
		cout << b[i] << " ";
	}

}




