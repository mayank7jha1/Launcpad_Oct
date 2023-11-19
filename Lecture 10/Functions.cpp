#include<iostream>
using  namespace std;
//Logic to Implement x^y.

//Function Declaration and Definition.

//Return Type SumInInteger(Parameters/Arguments){

//Logic

//}

//Return Type int,float,double,char,bool,long long

//Parameters/Arguments: Jinke uper tumhara function
//dependant hain.
//Please Specify the data types of your parameters
//in your function.


//Function Definition:
int PowersInInteger(int x, int y) {
	int ans = 1;
	for (int i = 1; i <= y; i += 1) {
		ans *= x;
	}

	// cout << ans << endl;
	return ans;
}

//Function Prototype:
int MultiplyInIntegers(int x, int y);

int main() {
	int x, y;
	cin >> x >> y;

	//Function Call
	int t = PowersInInteger(x, y);
	cout << t << endl;

	cout << PowersInInteger(x, y) << endl;
}

//Function Definition.
int MultiplyInIntegers(int x, int y) {
	int ans = x * y;
	return ans;
}




