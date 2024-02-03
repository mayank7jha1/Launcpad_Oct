#include<iostream>
using  namespace std;
//Print 1 - 10 in increasing order.

void Function(int x) {

	if (x > 10) {
		return;
	}


	Function(x + 1);//x+1 --- 10 counting
	cout << x << " ";
	return;
}



int main() {
	Function(0);//1----10 counting print karna
}