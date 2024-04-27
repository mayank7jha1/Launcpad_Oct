#include<iostream>
#include<map>
#include<list>
using  namespace std;

int direction;

template<typename T>

class Graph {

	map<T, list<T>>mp;
public:

	void addEdge(T x, T y) {

		mp[x].push_back(y);

		if (direction == 0) {
			mp[y].push_back(x);
		}
	}

	void Print() {

		for (pair<T, list<T>> x : mp) {

			T node = x.first;
			cout << node << " -----> ";

			list<T>nbr = x.second;

			for (T y : nbr) {
				cout << y << " ";
			}

			cout << endl;
		}

	}

};



int main() {

	Graph<int>gr;
	int n, m;
	cin >> n >> m;
	cin >> direction;


	for (int i = 0; i < m; i += 1) {
		int x, y;
		cin >> x >> y;

		gr.addEdge(x, y);

	}

	gr.Print();


}