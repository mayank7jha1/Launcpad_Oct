#include<iostream>
using  namespace std;

class Solution {
public:
    int getLCS(string &a, string &b, int i, int j) {

        if (i >= a.length() or j >= b.length()) {
            return 0;
        }

        if (a[i] == b[j]) {
            return 1 + getLCS(a, b, i + 1, j + 1);
        } else {

            int Option1 = getLCS(a, b, i + 1, j);
            int Option2 = getLCS(a, b, i, j + 1);
            return max(Option1, Option2);
        }
    }

    int longestCommonSubsequence(string a, string b) {
        return getLCS(a, b, 0, 0);
    }
};

int main() {

}