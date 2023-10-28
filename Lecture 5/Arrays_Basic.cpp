#include<iostream>
using  namespace std;

int main() {
	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int f, g, h, i, j;
	cin >> f >> g >> h >> i >> j;

	//You have created a array of 5 buckets
	//and all of them are of integer type.
	int arr[5];

	cout << arr << endl;
	cout << arr + 1 << endl;
	cout << arr + 2 << endl;
	cout << arr + 3 << endl;
	cout << arr + 4 << endl;


	//value ke liye [];
	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;
	arr[3] = 400;
	arr[4] = 500;

	cout << arr[0] << " " << arr[1] << " " <<
	     arr[2] << " " << arr[3] << " " << arr[4] << endl;

	int brr[5];
	cin >> brr[0] >> brr[1] >> brr[2] >> brr[3] >> brr[4];

	cout << brr[0] << " " << brr[1] << " " <<
	     brr[2] << " " << brr[3] << " " << brr[4] << endl;


	int crr[5];

	for (int i = 0; i < 5; i++) {
		cin >> crr[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << crr[i] << " ";
	}
	cout << endl;

	int drr[5];

	for (int i = 0; i < 5; i++) {
		cin >> drr[i];
		cout << drr[i] << " ";
	}
	cout << endl;

	int err[] = {999, 888, 777, 666, 555};

	for (int i = 0; i < 5; i++) {
		cout << err[i] << " ";
	}
	cout << endl;

	int frr[10] = {0};
	cout << frr + 0 << endl;

}

// 140701896443984
// 140701896443988
// 140701896443992
// 140701896443996
// 140701896444000