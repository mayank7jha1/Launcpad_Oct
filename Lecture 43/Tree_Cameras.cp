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
class Solution {
    unordered_map<TreeNode*, bool>visited;
    int camera;
public:

    void PlaceCamera(TreeNode* root, TreeNode* Parent) {

        if (root == NULL) {
            return;
        }

        PlaceCamera(root->left, root);
        PlaceCamera(root->right, root);


        if (((Parent == NULL and visited[root] == 0)) or

                visited[root->left] == 0 or visited[root->right] == 0) {

            camera += 1;
            visited[root] = 1;
            visited[root->left] = 1;
            visited[root->right] = 1;
            visited[Parent] = 1;

        }
        return;
    }


    int minCameraCover(TreeNode* root) {
        camera = 0;
        visited[NULL] = true;

        PlaceCamera(root, NULL);
        return camera;
    }
};