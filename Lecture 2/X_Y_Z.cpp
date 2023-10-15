#include<iostream>
using  namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;

	int count = 1;
	while (count <= x) {
		if (count % y == 0 and count % z != 0) {
			cout << count << endl;
		}
		count = count + 1;
	}
}