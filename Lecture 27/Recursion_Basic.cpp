#include<iostream>
using  namespace std;


//Defintion: 3^x;

int Function(int x) {
	//Base Condtion: Stopping Point

	// if (x == 1) {
	// 	return 3;
	// }

	if (x == 0) {
		return 1;
	}

	//Task and Next Stage or  Tast
	//and Recursive Relation

	int ans = 3 * Function(x - 1);
	return ans;
}



int main() {
	int value = Function(4);
	cout << value << " ";
}


