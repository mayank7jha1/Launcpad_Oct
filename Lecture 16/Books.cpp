#include<iostream>
using  namespace std;

int main() {
	int n, Time_Provided;
	cin >> n >> Time_Provided;

	int a[n];
	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}

	int Total_Time_Consumed = 0;
	int books_read = 0;

	//This is the pointer used for
	//shrinking the window and represeents
	//the stating point of the window.
	int j = 0;

	for (int i = 0; i < n; i += 1) {

		Total_Time_Consumed += a[i];
		books_read += 1;

		if (Total_Time_Consumed > Time_Provided) {
			//You have exceeded the parameter
			//for the window , hence start
			//shrinking it.
			Total_Time_Consumed -= a[j];
			books_read -= 1;
			j += 1;

		}

		//You have not yet exhausted the windo
		//parameter keep on expanding it.
	}

	cout << books_read << endl;



}