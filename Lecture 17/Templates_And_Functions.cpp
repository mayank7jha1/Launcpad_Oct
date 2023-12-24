#include<iostream>
using  namespace std;

//Function Overloading where as in
//either the type or the no of arguments
//are different.

// int sum(int a, int b) {
// 	int c = a + b;
// 	return c;
// }

// int sum(int a, int b, int c) {
// 	int d = a + b + c;
// 	return d;
// }

//We want to evolve from the above and
//make generic codes.

//let's say we want only one function that
//sums a, a particular number of
//arguments of any type.

//We want to sum any combination of 3 arguments
//Method: Template:
// template <typename T>
// T Sum(T a, T b, T c) {
// 	T d = a + b + c;
// 	return d;
// }
//We want to sum any combination of 4 arguments
//Method: Template:
// template<typename T>
// double Sum(T a, double b, int c, T d) {
// 	T e = a + b + c + d;
// 	return e;
// }

//More Generic:
template<typename T>
T Sum(T a, T b, T c = 0, T d = 0) {
	T e = a + b + c + d;
	return e;
}


int main() {
	int a = 100, b = 130;
	double c = 1.1, d = 12.45;
	cout << Sum<double>(a, b , c, d) << endl;
	cout << Sum<char>(c, a , d) << endl;
}





