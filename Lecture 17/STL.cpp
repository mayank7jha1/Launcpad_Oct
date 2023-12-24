#include<iostream>
#include<algorithm>
using  namespace std;

//Algorithms :
//sort,reverse,rotate,bs,lb,ub;


int main() {
	// int a[] = {1, 2, 3, 4, 5, 6, 7};
	// int n = 7;
	// int k = 3;
	//Fastest Sort till now.
	//(n (log(n)))
	// sort(a + 0, a + n);
	// reverse(a + 0, a + n);
	//rotate(a + 0, a + k, a + n);
	//rotate(a + 0, a + (n - k), a + n);

	// for (int i = 0; i < n; i += 1) {
	// 	cout << a[i] << " ";
	// }


	// int ans = binary_search(a, a + n, k + 100);
	// cout << ans << endl;

	int a[] = {1, 1, 1, 2, 2, 2, 2, 2, 3, 4, 5};
	int n = 11;

	//Lower_Bound (2): Will give me the
	//first Index that is storing a value
	//greater tthan or equal to (2).

	//cout << (*lower_bound(a, a + n, 2));

	int t = lower_bound(a, a + n, 16) - a;
	cout << t << endl;

	int z = upper_bound(a, a + n, 12) - a;
	cout << z << endl;



}










