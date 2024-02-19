#include<iostream>
using  namespace std;
int k;

//Basic Flower Problem:
//You are Given n flowers and
//just tell me the number of ways
//to eat the flowers.

int Flowers(int n) {

	if (n == 0) {
		//If I am able to reach here
		//that means i have found a path.
		return 1;
	}

	//When the last Box is red flower
	int Option1 = Flowers(n - 1);

	//When the last box is white flower
	int Option2 = 0;

	if (n - k >= 0) {
		Option2 = Flowers(n - k);
	}

	int ans = Option1 + Option2;
	return ans;
}



int main() {
	int n;
	cin >> n >> k;
	cout << Flowers(n) << endl;
}






