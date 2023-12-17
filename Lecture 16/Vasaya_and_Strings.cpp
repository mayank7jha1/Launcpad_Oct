#include<iostream>
using  namespace std;
int k, n;
char s[100005];


int Solve(char ch) {

	//We define the start point of the window.
	int i = 0;

	//No of undesired characters inside
	//the current window or changable characters.
	int count = 0;

	int ans = 0; //Maximum size subtring of same characters.


	//Then we will iterate to look for a ideal window
	//size.
	for (int j = 0; j < n; j += 1) {

		if (s[j] != ch) {
			//This jth character is a undesired character.
			//You will assumee you have changed this character
			//into a desied one.
			count += 1;
		}

		//If hamara count > k aapko ab window ek mil
		//gayi and find the size and look for anotherr
		//window. While looking for another window
		//change the starting point of the next windoee
		//accordingly.

		while (count > k and i <= j) {
			//shrink your window until and unless you are
			//at a desired window containing only k changes.

			if (s[i] != ch) {
				//You are excluding this undesired
				//character from your next window while
				//moving the start point for your next
				//window.
				count -= 1;
			}

			i += 1;
		}

		//Current window size is given by: j-i+1

		//If current window size is greater than previous
		//maximum substring of same characters
		//you have got a new answer.

		if (j - i + 1 > ans) {
			ans = j - i + 1;
		}
	}



	return ans;
}


int main() {
	cin >> n >> k;
	cin >> s;

	//First Step: Converting b->a;
	int ans1 = Solve('a');

	int ans2 = Solve('b');

	if (ans1 > ans2) {
		cout << ans1 << endl;
	} else {
		cout << ans2 << endl;
	}

}