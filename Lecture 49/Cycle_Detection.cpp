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

	//Aplication of DFS :Connected Component(Unweighted and Undirected)

	bool DFS_Helper(T scr, map<T, bool>&visited, T parent) {

		visited[scr] = 1;

		for (auto nbr : mp[scr]) {

			if (visited[nbr] == 0) {
				bool cycle = DFS_Helper(nbr, visited, scr);
				if (cycle == 1) {
					return true;
				}
			} else if (nbr != parent) {
				return true;
			}
		}

		return false;
	}


	bool DFS(T scr) {

		map<T, bool>visited;

		for (auto x : mp) {
			visited[x.first] = 0;
		}
		int ulti = 0;

		// for (auto x : mp) {
		// 	T node = x.first;
		// 	if (visited[node] == 0) {
		// 		int ans = DFS_Helper(scr, visited, -1);
		// 		if (ans == 1) {
		// 			ulti = 1;
		// 		}
		// 	}
		// }

		// return ulti;

		return DFS_Helper(scr, visited, -1);
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
	cout << gr.DFS(0);
}