
#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;

//n(logn)
//n computation:

class Solution {
public:
    int arrayPairSum(vector<int>& v1) {
        int n = v1.size();
        sort(v1.begin(), v1.end());
        int ans = 0;
        for (int i = 0; i < n; i += 2) {
            ans += v1[i];
        }
        return ans;
    }
    int arrayPairSum2(vector<int>&v1) {
        long long minimum = -10005;
        long long maximum = 10005;

        int freq[2 * 10005 + 5] = {0};

        for (int i = 0; i < v1.size(); i += 1) {
            int x = v1[i];
            int x_shifted = x - minimum;
            freq[x_shifted] += 1;
        }
        //Total Contribution of all the elements;
        int ans = 0;
        //Kya Previous Pair Poora bana tha.
        int residue = 0;

        //Iterate over the Frequency Array.
        for (int i = minimum; i <= maximum; i += 1) {

            int x_shifted = i - minimum;
            if (freq[x_shifted] > 0) {

                freq[x_shifted] = freq[x_shifted] - residue;
                ans += ((freq[x_shifted] + 1) / 2) * (i);
                residue = (freq[x_shifted] % 2);

            }

        }

        return ans;
    }
};


int main() {
    Solution s;
    int n;
    cin >> n;
    vector<int>v1(n, 0);

    for (int i = 0; i < n; i += 1) {
        cin >> v1[i];
    }

    int ans = s.arrayPairSum(v1);
    cout << ans << endl;
    int ans2 = s.arrayPairSum2(v1);
    cout << ans2 << endl;
}
