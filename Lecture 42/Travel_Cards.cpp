#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
using  namespace std;
#define int long long

//Desc. Sort
bool compare(int x, int y) {

	if (x > y) {
		return true;
	} else {
		return false;
	}

}

int Travel_Cards() {
	int n, a, b, k, f;
	cin >> n >> a >> b >> k >> f;

	map <pair<string, string>, int>mp;

	string Prev_Destination = "";

	for (int i = 0; i < n; i += 1) {
		string start, end;
		cin >> start >> end;

		int Price = 0;

		if (start == Prev_Destination) {
			//This is a Transhipment.
			Price = b;
		} else {
			Price = a;
		}

		Prev_Destination = end;
		//We want to store the data lexographically.
		if (start > end) {
			swap(start, end);
		}

		mp[ {start, end}] += Price;
		//mp.insert({{start, end}, Price});
	}

	//We want to Know the Maximum Cost vaale Travelling Points.
	vector<int>cost;
	int Total_Travelling_Cost = 0;

	for (pair<pair<string, string>, int> x : mp) {
		cost.push_back(x.second);
		Total_Travelling_Cost += x.second;
	}

	sort(cost.begin(), cost.end(), compare);

	//Now I Will Buy Travel Cards.


	for (int i = 0; i < k; i += 1) {

		if (cost[i] > f) {
			Total_Travelling_Cost =
			    Total_Travelling_Cost - cost[i] + f;
		} else {
			break;
		}
	}

	return Total_Travelling_Cost;
}



int32_t main() {
	cout << Travel_Cards() << endl;
}