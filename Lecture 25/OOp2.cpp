#include<iostream>
#include<cstring>
using  namespace std;

/*
	3. Copy Assignment Operator
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
	//Dynamic Array
	char * color = new char[100];
	//Static Array
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

	//My Own Copy Constructor : Deep Copy

	Car(Car &x) {
		cout << "Inside My Own Copy Constructor " << endl;
		model = x.model;
		strcpy(name, x.name);
		price = x.price;
		Condition = x.Condition;
		color = new char[100];
		strcpy(color, x.color);
	}


	//Operator Overloading:
	//Copy Assignment Operator
	//Car.operator=(Object);

	void operator=(Car &x) {
		cout << "Inside My Own Copy Assignment operator " << endl;
		model = x.model;
		strcpy(name, x.name);
		price = x.price;
		Condition = x.Condition;
		color = new char[100];
		strcpy(color, x.color);
	}

	//Member Function
	void Print() {
		cout << "Name of the Car is : " << name << endl;
		cout << "Model Number is : " << model << endl;;
		cout << "Condition of the Car is : " << Condition << endl;
		cout << "Price of the Car is : " << price << endl;
		cout << "Color of the Car is : " << color << endl;
		cout << "    <-------------->   " << endl;
	}
};


int main() {
	Car m;
	Car b(7000, 112, "BMW", "Good", "Black");
	Car d(b);

	//Copy Assignment Operator:
	//Operator Overloading


	Car c;
	c = h;
	// c.operator=(m);

	c.name[0] = 'T';
	c.color[0] = 'P';

	b.Print();
	c.Print();

	// float x = 10.6, y = 410.2;
	// int d = x + y;

	// x.operator + (y);

	// int operator+(y) {
	// 	(int)
	// }

}






















