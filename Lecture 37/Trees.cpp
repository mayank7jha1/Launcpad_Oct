#include<iostream>
#include<climits>
#include<algorithm>
using  namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int x) {
		data = x;
		left = NULL;
		right = NULL;
	}
};


node* buildtree() {
	int x;
	cin >> x;

	if (x == -1) {
		return NULL;
	} else {
		//Constructor Initialisation
		node* n = new node(x);

		n->left = buildtree();
		n->right = buildtree();
		return n;
	}
}

void Preorder(node* root) {

	if (root == NULL) {
		return;
	}

	cout << root->data << " ";
	Preorder(root->left);
	Preorder(root->right);

}

void Inorder(node* root) {
	if (root == NULL) {
		return;
	}

	Inorder(root->left);
	cout << root->data << " ";
	Inorder(root->right);

}

void Postorder(node* root) {
	if (root == NULL) {
		return;
	}

	Postorder(root->left);
	Postorder(root->right);

	cout << root->data << " ";
}

int countnode(node* root) {

	if (root == NULL) {
		return 0;
	}

	int left_side = countnode(root->left);
	int right_side = countnode(root->right);

	int ans = left_side + right_side + 1;
	return ans;

}


int sumnode(node* root) {

	if (root == NULL) {
		return 0;
	}

	int left_side = sumnode(root->left);
	int right_side = sumnode(root->right);

	int ans = left_side + right_side + root->data;
	return ans;

}

int  height(node* root) {

	if (root == NULL) {
		return 0;
	}

	int left_height = height(root->left);
	int right_height = height(root->right);

	int ans = max(left_height, right_height) + 1;
	return ans;
}

void mirror(node* &root) {

	if (root == NULL) {
		return;
	}

	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}



int diameter(node* root) {
	if (root == NULL) {
		return 0;
	}

	//You ask recursion to calculate
	//diameter in left subtree.
	int Op1 = diameter(root->left);

	//You ask recursion to calculate
	//diameter in right subtree.
	int Op2 = diameter(root->right);

	//You assume diameter to pass through the root node.
	int Op3 = height(root->left) + height(root->right);

	return max({Op1, Op2, Op3});

}

void printleftview(node* root, int level, int &maxlevel) {
	if (root == NULL) {
		return;
	}

	if (maxlevel < level) {
		maxlevel = level;
		cout << root->data << " ";
	}

	printleftview(root->left, level + 1, maxlevel);
	printleftview(root->right, level + 1, maxlevel);
}

void printrightview(node* root, int level, int &maxlevel) {
	if (root == NULL) {
		return;
	}

	if (maxlevel < level) {
		maxlevel = level;
		cout << root->data << " ";
	}

	printrightview(root->right, level + 1, maxlevel);
	printrightview(root->left, level + 1, maxlevel);
}

int main() {
	node* root = buildtree();
	Preorder(root);
	cout << endl;
	Inorder(root);
	cout << endl;
	Postorder(root);
	cout << endl;
	cout << countnode(root) << endl;
	cout << sumnode(root) << endl;
	cout << height(root) << endl;
	//mirror(root);
	Preorder(root);
	cout << endl;
	cout << diameter(root) << endl;
	int maxlevel = -1;
	printleftview(root, 0, maxlevel);
	cout << endl;
	maxlevel = -1;
	printrightview(root, 0, maxlevel);
}













