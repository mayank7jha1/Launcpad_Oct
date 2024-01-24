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
	char name[100];
	string Condition;

	//Constructor
	Car() {
		cout << "Default Constructor" << endl;
	}

	//Parameterised Constructor and Constructor
	//Overloading
	Car(int p, int m, char n[], string c) {
		cout << "Parameterised Constructor" << endl;
		if (p < Min_Value) {
			price = 60000;
		} else {
			price = p;
		}
		model = m;
		strcpy(name, n);
		Condition = c;
	}

	Car (int m, char n[], string c) {
		color = new char[100];
		cout << "Parameterised Constructor 2" << endl;
		model = m;
		strcpy(name, n);
		Condition = c;
	}

	//My Own Copy Constructor
	// Car(Car &ch) {
	// 	cout << "My Own Copy Constructor" << endl;
	// 	price = ch.price;
	// 	model = ch.model;
	// 	strcpy(name, ch.name);
	// 	Condition = ch.Condition;
	// }


	//Member Function

	//Getter
	int get_Price() {
		return price;
	}

	//Setter
	void set_price(int discount) {
		if (discount > minimum) {
			price = 60000;
		} else {
			price = (100000 * (100 - discount)) / 100;
		}
	}

	void Print() {
		cout << "Name of the Car is : " << name << endl;
		cout << "Model Number is : " << model << endl;;
		cout << "Condition of the Car is : " << Condition << endl;
		cout << "Price of the Car is : " << price << endl;
	}
};


int main() {
	// Car c, f;

	// c.name[0] = 'B';
	// c.name[1] = 'M';
	// c.name[2] = 'W';
	// c.name[3] = '\0';

	// c.model = 1122;
	// c.Condition = "Very Good";
	// c.set_price(70);

	// c.Print();
	// Car e;

	// cout << endl;
	// cout << endl << endl;
	Car g(10000, 2222, "Benz", "Poor");
	g.Print();

	cout << endl << endl;

	// Car h(1111, "Audi", "Very Poor");
	// h.Print();

	// cout << endl << endl << endl;

	Car k(g);//Default Copy Constructor
	k.Print();
	cout << endl << endl << endl;
	Car l(g);
	l.Print();
	cout << endl << endl << endl;

	l.name[0] = 'T';
	k.Print();
	cout << endl << endl << endl;
	l.Print();
	cout << endl << endl << endl;
	g.Print();
	cout << endl << endl << endl;

}






















