/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include<iostream>
#include<vector>
using  namespace std;


class Solution {
public:
    vector<vector<int>>ans;
    vector<int>current_path;

    void FindPath(TreeNode* root, int Sum) {

        if (root == NULL) {
            return;
        }

        current_path.push_back(root);

        if (root->val == Sum and root->left == NULL
                and root->right == NULL) {

            ans.push_back(current_path);

        } else {
            FindPath(root->left, sum - root->val);
            FindPath(root->right, sum - root->val);
        }

        //Backtracking
        current_path.pop_back();

    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        FindPath(root, targetSum);
        return ans;
    }
};