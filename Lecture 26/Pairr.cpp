#include<iostream>
#include"Pair.h"
using  namespace std;

int main() {
	Pair<int>p1, p2;

	p1.first = 10;
	p1.second = 20;

	p2.first = 100;
	p2.second = 250;


	cout << p1.first << " " << p1.second << endl;
	cout << p2.first << " " << p2.second << endl;
}