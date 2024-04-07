#include<iostream>
#include<vector>
#include<unordered_map>
using  namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};

class Solution {
public:

	//This Connect Will create a mapping of child and its parent.
	unordered_map<TreeNode*, TreeNode*>ump;
	unordered_map<TreeNode*, bool>visited;
	// unordered_set<TreeNode*>visited;
	//vector<TreeNode*>visited;

	void Connect(TreeNode* root, TreeNode* Parent) {
		if (root == NULL) {
			return;
		}

		ump[root] = Parent;
		Connect(root->left, root);
		Connect(root->right, root);
	}


	void dfs(TreeNode* target, int k, vector<int>&ans) {

		if (target == NULL or visited.count(target) == 1) {
			return;
		}

		visited[target] = 1;
		// visited.insert(target);

		if (k == 0) {
			ans.push_back(target->val);
		}

		dfs(target->left, k - 1, ans);
		dfs(target->right, k - 1, ans);

		TreeNode* Parent = ump[target];

		dfs(Parent, k - 1, ans);

	}


	vector<int> distanceK(TreeNode* root, TreeNode* target,
	                      int k) {

		vector<int>ans;

		if (root == NULL) {
			return ans;
		}

		Connect(root, NULL);
		dfs(target, k, ans);
		return ans;

	}
};


int main() {

}
