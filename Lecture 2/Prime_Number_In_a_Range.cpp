#include<iostream>
using  namespace std;

//User will give you a number and
//you will have to print prime numbers from 1 to n.

int main() {
	int n;
	cin >> n;

	int count = 2;
	//int flag;

	while (count <= n) {
		//flag = 0;
		int flag = 0;
		int i = 2;
		while (i <= count - 1) {
			if (count % i == 0) {
				flag = 1;
			}
			i = i + 1;
		}

		if (flag == 0) {
			cout << count << " ";
		}

		count = count + 1;
	}
}






