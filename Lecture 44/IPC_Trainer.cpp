#include<iostream>
#include<queue>
#include<set>
using  namespace std;
#define int long long
#define As 1004



int IPC() {
	int Total_Trainers, days;
	cin >> Total_Trainers >> days;

	int Start_Date[As] = {0}, Lectures[As] = {0}, Sadness[As] = {0};

	//Sort The Data On the Basis of Sadness.
	priority_queue<pair<int, int>>pq;//Max Heap

	for (int i = 0; i < Total_Trainers; i += 1) {
		cin >> Start_Date[i] >> Lectures[i] >> Sadness[i];
		pq.push({Sadness[i], i});
	}

	int Lectures_Taken[As] = {0};

	set<int>d;

	for (int i = 1; i <= days; i += 1) {
		d.insert(i);
	}

	while (!pq.empty()) {

		pair<int, int>p = pq.top();
		pq.pop();

		int Index_of_Professor = p.second;
		int Sadness_of_Professor = p.first;

		int Start_Date_of_Professor = Start_Date[p.second];

		int Ideal_Ending_Date_of_Professor =
		    Start_Date[p.second] + Lectures[p.second] - 1;


		for (int i = Start_Date_of_Professor; i <= Ideal_Ending_Date_of_Professor; i += 1) {

			set<int>::iterator f = d.lower_bound(i);

			if (f == d.end()) {
				break;
			} else {

				Lectures_Taken[p.second] += 1;
				d.erase(f);//Erase only take iterators as arguments
			}
		}

	}


	int Total_Sadness = 0;

	for (int i = 0; i < Total_Trainers; i += 1) {

		Total_Sadness += (Lectures[i] - Lectures_Taken[i]) * Sadness[i];
	}

	return Total_Sadness;
}


int32_t main() {
	int t;
	cin >> t;

	while (t--) {
		cout << IPC() << endl;
	}
}




