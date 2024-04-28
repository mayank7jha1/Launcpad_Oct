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
		// mp[y].push_back(x);
	}

	//Aplication of DFS :Connected Component(Unweighted and Undirected)

	bool DFS_Helper(T scr, map<T, bool>&visited, map<T, bool>&stack) {

		visited[scr] = 1;
		stack[scr] = 1;

		for (auto nbr : mp[scr]) {

			if ((visited[nbr] == 0 and
			        DFS_Helper(nbr, visited, stack) == 1) or (stack[nbr] == 1)) {

				return true;
			}
		}

		stack[scr] = 0;

		return false;
	}


	bool DFS(T scr) {

		map<T, bool>visited, stack;

		for (auto x : mp) {
			visited[x.first] = 0;
			stack[x.first] = 0;
		}


		return DFS_Helper(scr, visited, stack);
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