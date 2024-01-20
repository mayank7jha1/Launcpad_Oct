#include<iostream>
using  namespace std;

int main() {
	//Static Arrays and Variables :
	int a[100] = {0};
	int x = 10;

	//Dynamic Arrays and Variables :
	int *ptr = new int(10);
	int *b = new int[100] {0};

	//If you want to delete a variable
	//in heap Memory:

	delete ptr;//For Variable
	delete[]b;//For Arrays;

	cout << (*ptr) << endl;

	for (int i = 0; i < 20; i += 1) {
		cout << b[i] << " ";
	}
	cout << endl;

	//Changing Size of Dynamic Arrays and Variables:
	b = new int[20] {0};
	ptr = new int(203);

	cout << (*ptr) << endl;

	for (int i = 0; i < 20; i += 1) {
		cout << b[i] << " ";
	}

}





