#include<iostream>
using  namespace std;

//Pass By  Value
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "Second: ";
	cout << "x = " << a << " y = " << b << endl;
}

//Refernce Variable
void swap1(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "Second: ";
	cout << "x = " << a << " y = " << b << endl;
}

//Pass By Reference
void swap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "Second: ";
	cout << "x = " << *a << " y = " << *b << endl;
}


int main() {
	int x = 10, y = 20;
	cout << "First: ";
	cout << "x = " << x << " y = " << y << endl;

	// int temp = x;
	// x = y;
	// y = temp;
	//swap(x, y);

	swap2(&x, &y);
	cout << "Third: ";
	cout << "x = " << x << " y = " << y << endl;


}