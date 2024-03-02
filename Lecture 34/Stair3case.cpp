#include<iostream>
#include<climits>
#define int long long
using  namespace std;

int Min_steps = INT_MAX;

void Stair3case(int*a, int n, int index, int steps, int* visited) {

	if (index == n) {
		Min_steps = min(Min_steps, steps);
		return;
	}


	visited[index] = 1;

	if (index + 1 <= n and visited[index + 1] == 0) {
		Stair3case(a, n, index + 1, steps + 1, visited);
	}

	if (index + a[index] <= n and index + a[index] >= 0 and
	        visited[index + a[index]] == 0) {

		Stair3case(a, n, index + a[index],
		           steps + 1, visited);
	}

	//backtrack
	visited[index] = 0;

}

int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		Min_steps = INT_MAX;
		int a[n];
		for (int i = 0; i < n; i += 1) {
			cin >> a[i];
		}
		int visited[25] = {0};
		Stair3case(a, n, 0, 0, visited);

		if (Min_steps == INT_MAX) {
			cout << -1 << endl;
		} else {
			cout << Min_steps << endl;
		}
	}
}