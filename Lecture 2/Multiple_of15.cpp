#include<iostream>
using  namespace std;

int main() {
	int count = 1;

	while (count <= 100) {

		if ((count % 15 == 0) and (count % 2 == 1)) {
			cout << count << endl;
		}
		count = count + 1;
	}
}