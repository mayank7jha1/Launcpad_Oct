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

		int count = 1;

		for (auto x : mp) {

			T node = x.first;

			if (visited[node] == 0) {
				cout << "Component No " << count << " ---> ";
				DFS_Helper(node, visited);
				cout << endl;
				count = count + 1;
			}
		}

		cout << "Total Components : " << count - 1 << endl;
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
	gr.DFS(0);
}