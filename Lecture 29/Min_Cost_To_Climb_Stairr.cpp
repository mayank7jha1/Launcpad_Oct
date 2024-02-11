#include<iostream>
#include<vector>
#include<climits>
using  namespace std;


class Solution {
public:
    int Solve(int index, vector<int>&cost) {

        if (index == cost.size()) {
            return 0;
        }

        int Option1 = cost[index] + Solve(index + 1, cost);
        int Option2 = INT_MAX;

        if (index + 2 <= cost.size()) {
            Option2 = cost[index] + Solve(index + 2, cost);
        }

        return  min(Option1, Option2);
    }


    int minCostClimbingStairs(vector<int>& cost) {
        int Option1 = Solve(0, cost);
        int Option2 = Solve(1, cost);
        return min(Option1, Option2);
    }
};


int main() {
    Solution obj;

    int n;
    cin >> n;
    vector<int>cost(n);
    for (int i = 0; i < n; i += 1) {
        cin >> cost[i];
    }

    cout << obj.minCostClimbingStairs(cost);

}