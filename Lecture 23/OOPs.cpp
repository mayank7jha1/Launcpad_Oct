#include<iostream>
using  namespace std;

//Whenever You are Trying to Create your
//own data type (box)

//Design of Your Car and Hence will seperatedly
//not occupy any space.

class Car {

	//Access Modifiers:
	//Private Protected and Public.

	//Every Class Has its own  data members
	//and member Functions.

	//Data Members:
	//By Default every Data Member and Member Function
	//is Private.
private:
// public:
	int price = 1000000;
	string name;
	string engine;
public:
	bool iscomplete;
} M;

//M is an entity/Object of my class Car.
//This will take space.


int main() {

	//Whenever I want to create Entities/Objects of my class i.e of my
	//define data type:

	//Object d of my user defined data type Car.
	Car d;

	Car c[5];

	//I have Created an Array of entities/Objects
	//of user defined data type car or you can say
	//of my class car.


	//This is how you change a data member for an
	//object/entity of the class.

	M.price = 100;

	cout << M.price << endl;
}