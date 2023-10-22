#include<iostream>
using  namespace std;

int main() {


	//Loop:

	//1. Starting point
	//2. Stoping Point
	//3. Aage kaise badhna hain.


	// int i = 1;//Starting Point

	// while (i <= 10) {//Stoping Point


	// 	cout << i << " ";//Task you are doing

	// 	i = i + 1;//Next Stage par kaise jaana hain.
	// }
	// cout << endl;//i=11
	//int i = 5;


	// for (; i <= 10;) {
	// 	cout << i << " ";
	// 	i = i + 1;
	// }

	// cout << endl;

	// for (int i = 3; i <= 15; i += 1) {
	// 	cout << i << endl;
	// }

	// cout << endl << endl << i << endl;



	// int j = 10;

	// do {
	// 	cout << j << " ";
	// 	j = j + 1;

	// } while (j > 12);

	// cout << endl << "yo" << endl;

	// while (j > 12) {
	// 	cout << j << " ";
	// 	j = j + 1;

	// }

	//Ternary Operator: ? :

	// int x = 30;
	// if (x > 20) {
	// 	cout << "Yo" << endl;
	// } else {
	// 	cout << "No" << endl;
	// }

	// ((x > 20) ? (cout << "Yo" << endl) : (cout << "No" << endl));

	int x = 15;

	((x > 20) ? ((x > 30) ? (cout << "Yes" << endl) : (cout << "No" << endl)) :
	 (cout << "Why" << endl));

	if (x > 20) {
		if (x > 30) {
			(cout << "Yes" << endl);
		} else {
			(cout << "No" << endl);
		}
	} else {
		(cout << "Why" << endl);
	}
}
