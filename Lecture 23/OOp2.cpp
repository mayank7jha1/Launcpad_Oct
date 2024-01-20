#include<iostream>
using  namespace std;

//Getters and Setters:

class Car {
private:
	int Price = 1000000;
public:
	string name = "Mayank";
	string Engine;
	bool iscomplete;

	//Member Function:
	int Get_Price() {
		return Price;
	}

	void Set_Price(int x) {
		if (x > 40) {
			Price = 600000;
		} else {
			Price = ((Price * (100 - x)) / 100);
		}
	}

};


int main() {
	Car e;
	cout << e.Get_Price() << endl;

	int discount = 20;
	e.Set_Price(discount);

	cout << e.name << endl;
	cout << e.Get_Price() << endl;
}