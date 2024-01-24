#include<iostream>
#include<cstring>
using  namespace std;

/*
	2. Copy Constructor
*/

class Car {
private:
	//Data Members
	const int minimum = 40;
	const int Min_Value = 60000;
	float price = Min_Value;


public:
	//Data Members
	int model;
	char * color = new char[100];
	char name[100];
	string Condition;

	//Constructor
	Car() {
		cout << "Default Constructor" << endl;
	}

	//Parameterised Constructor and Constructor
	//Overloading
	Car(int p, int m, char n[], string c, char* ch) {
		// ch = new char[100];
		cout << "Parameterised Constructor" << endl;
		if (p < Min_Value) {
			price = 60000;
		} else {
			price = p;
		}
		model = m;
		strcpy(name, n);
		strcpy(color, ch);
		Condition = c;
	}


	//Member Function
	void Print() {
		cout << "Name of the Car is : " << name << endl;
		cout << "Model Number is : " << model << endl;;
		cout << "Condition of the Car is : " << Condition << endl;
		cout << "Price of the Car is : " << price << endl;
		cout << "Color of the Car is : " << color << endl;
	}
};


int main() {
	Car g(10000, 2222, "Benz", "Poor", "Black");
	//g.Print();

	//cout << endl << endl;

	Car k(g);//Default Copy Constructor
	//k.Print();

	k.color[0] = 'T';
	k.name[0] = 'S';

	cout << endl << endl;
	g.Print();
	cout << endl << endl;
	k.Print();
	// cout << endl << endl;
	//cout << endl << endl;

}






















