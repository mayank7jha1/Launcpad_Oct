#include<iostream>
#include<algorithm>
using  namespace std;

class Activity {
public:
	//Data Members
	int Start_Time;
	int End_Time;
};

//Global Activity Array
Activity a[100001];

bool compare(Activity a1, Activity a2) {

	if (a1.End_Time == a2.End_Time) {
		if (a1.Start_Time < a2.Start_Time) {
			return true;
		} else {
			return false;
		}
	}

	if (a1.End_Time < a2.End_Time) {
		return true;
	} else {
		return false;
	}
}

void Solve(int n) {
	sort(a + 0, a + n, compare);

	// for (int i = 0; i < n; i += 1) {
	// 	cout << a[i].Start_Time << " " << a[i].End_Time << endl;
	// }

	int ans = 1;
	int Previous_Ending_Time = a[0].End_Time;

	for (int i = 1; i < n; i += 1) {
		if (a[i].Start_Time >= Previous_Ending_Time) {
			ans += 1;
			Previous_Ending_Time = a[i].End_Time;
		}
	}
	cout << ans << endl;
}



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;

	while (t > 0) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i += 1) {
			cin >> a[i].Start_Time >> a[i].End_Time;
		}

		Solve(n);
		//cout << endl << endl << endl;
		t -= 1;
	}
}






