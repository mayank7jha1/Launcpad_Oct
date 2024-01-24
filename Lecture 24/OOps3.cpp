#include<iostream>
using  namespace std;

/*
	1. Constructor
	2. Copy Constructor
	3. Copy Assignment Operator
	4. Destructor
*/

class Car {
private:
	//Data Members
	float price;
	const int minimum = 40;

public:
	//Data Members
	int model;
	char name[100];
	string Condition;

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
	Car c;

	c.name[0] = 'B';
	c.name[1] = 'M';
	c.name[2] = 'W';
	c.name[3] = '\0';

	c.model = 1122;
	c.Condition = "Very Good";
	c.set_price(70);

	c.Print();
}






















