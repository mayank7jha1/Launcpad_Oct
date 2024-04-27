#include<iostream>
#include<map>
#include<list>
#include<queue>
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

	//O(n): BFS

	void BFS(T scr) {
		map<T, bool>visited;

		for (auto x : mp) {

			T node = x.first;
			list<T>nbr = x.second;

			visited[node] = 0;
		}


		queue<T>q;
		q.push(scr);
		visited[scr] = 1;

		while (!q.empty()) {

			T node = q.front();
			q.pop();
			cout << node << " ";

			//You want the nbrs of this node.


			for (T nbr : mp[node]) {

				if (visited[nbr] == 0) {

					q.push(nbr);
					visited[nbr] = 1;

				}

			}

		}
	}

	//DFS : O(n)
	void DFS_Helper(T scr, map<T, bool>&visited) {

		cout << scr << " ";
		visited[scr] = 1;

		for (auto nbr : mp[scr]) {

			if (visited[nbr] == 0) {
				DFS_Helper(nbr, visited);
			}
		}
	}

	void DFS(T scr) {

		map<T, bool>visited;

		for (auto x : mp) {
			visited[x.first] = 0;
		}

		DFS_Helper(scr, visited);

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
	cout << endl;

	gr.BFS(0);
	cout << endl;
	gr.DFS(0);


}