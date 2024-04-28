#include<iostream>
#include<map>
#include<list>
#include<climits>
#include<queue>
using  namespace std;

template<typename T>

class Graph {
	map<T, list<T>>mp;
public:

	void addedge(T x, T y) {
		mp[x].push_back(y);
		mp[y].push_back(x);
	}

	//Aplication of BFS : SSSPA (Unweighted and Undirected)

	void BFS(T scr, T destination) {

		map<T, int>distance;

		for (pair < T, list<T>> p : mp) {

			T node = p.first;
			list<T>nbr = p.second;
			distance[node] = INT_MAX;
		}

		queue<T>q;
		q.push(scr);
		distance[scr] = 0;

		while (!q.empty()) {
			T node = q.front();
			q.pop();

			for (auto nbr : mp[node]) {

				if (distance[nbr] == INT_MAX) {
					q.push(nbr);
					distance[nbr] = distance[node] + 1;
				}
			}
		}

		cout << "Distance between Scr to Destination is " <<
		     distance[destination] << endl;

	}

};


int main() {
	Graph<int>gr;

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i += 1) {
		int a, b;
		cin >> a >> b;
		gr.addedge(a, b);
	}
	int scr, destination;
	cin >> scr >> destination;
	gr.BFS(scr, destination);
}