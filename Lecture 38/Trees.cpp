#include<iostream>
#include<climits>
#include<algorithm>
#include<queue>
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

class Pair2 {
public:
	int height;
	int diameter;
};



Pair2 fastdiameter(node* root) {
	Pair2 p;

	if (root == NULL) {
		p.height = 0;
		p.diameter = 0;
		return p;
	}

	Pair2 left_subtree =
	    fastdiameter(root->left);

	Pair2 right_subtree =
	    fastdiameter(root->right);


	p.height = max(left_subtree.height,
	               right_subtree.height) + 1;

	int Op1 = left_subtree.diameter;
	int Op2 = right_subtree.diameter;
	int Op3 = (left_subtree.height +
	           right_subtree.height);

	p.diameter = max({Op1, Op2, Op3});

	return p;

}

//pair--->first = height
//pair--->second is isbalanced.

pair<int, bool>isheightbalanced(node* root) {
	pair<int, bool>p;

	if (root == NULL) {
		p.first = 0;
		p.second = 1;
		return p;
	}

	pair<int, bool>left_subtree =
	    isheightbalanced(root->left);

	pair<int, bool>right_subtree =
	    isheightbalanced(root->right);


	p.first = max(left_subtree.first,
	              right_subtree.first) + 1;

	if (left_subtree.second == 1 and
	        right_subtree.second == 1 and
	        (left_subtree.first -
	         right_subtree.first) <= 1) {

		p.second = true;
	} else {
		p.second = false;
	}

	return p;

}


node* buildtreefromarray(int* a, int s, int e) {

	if (s > e) {
		return NULL;
	}

	int mid = (s + e) / 2;

	node* root = new node(a[mid]);
	root->left = buildtreefromarray(a, s, mid - 1);
	root->right = buildtreefromarray(a, mid + 1, e);

	return root;

}

void printkthlevel(node* root, int k) {
	if (root == NULL) {
		return;
	}

	if (k == 1) {
		cout << root->data << " ";
	}

	printkthlevel(root->left, k - 1);
	printkthlevel(root->right, k - 1);

}

void printALLLevel(node* root) {
	int H = height(root);

	for (int i = 1; i <= H; i++) {
		printkthlevel(root, i);
		cout << endl;
	}
}


void bfs(node* root) {

	queue<node*>q;
	q.push(root);

	// if (q.empty()) {
	// 	//This will return true when queue is empty.
	// }

	while (!q.empty()) {

		node* first = q.front();
		q.pop();

		cout << first->data << " ";

		if (first->left != NULL) {
			q.push(first->left);
		}

		if (first->right != NULL) {
			q.push(first->right);
		}

	}

}


void bfs2(node* root) {

	queue<node*>q;
	q.push(root);
	q.push(NULL);


	while (!q.empty()) {

		node* first = q.front();

		if (first == NULL) {
			cout << endl;
			q.pop();

			if (!q.empty()) {
				q.push(NULL);
			}

		} else {

			cout << first->data << " ";
			q.pop();

			if (first->left != NULL) {
				q.push(first->left);
			}

			if (first->right != NULL) {
				q.push(first->right);
			}

		}
	}
}

// int i = 0;


node* buildtreefrompreandin(int* in, int* pre, int s, int e) {


	if (s > e) {
		return NULL;
	}

	static int i = 0;

	node* root = new node(pre[i]);

	int index = -1;

	for (int j = s; j <= e; j += 1) {
		if (in[j] == pre[i]) {
			index = j;
			break;
		}
	}

	i += 1;

	root->left = buildtreefrompreandin(in, pre, s, index - 1);
	root->right = buildtreefrompreandin(in, pre, index + 1, e);

	return root;
}

int main() {
	node* root = buildtree();

	Preorder(root);
	cout << endl;

	cout << height(root) << endl;
	cout << diameter(root) << endl;

	Pair2 ans = fastdiameter(root);
	cout << ans.height << " " << ans.diameter << endl;

	pair<int, bool>ans2 = isheightbalanced(root);

	cout << ans2.first << " " << ans2.second << endl;

	int a[] = {10, 21, 3, 4, 5, 60, 7, 8, 9};
	node* root2 = buildtreefromarray(a, 0, 8);
	Preorder(root2);
	cout << endl;

	pair<int, bool>ans3 = isheightbalanced(root2);
	cout << ans3.first << " " << ans3.second << endl;

	printkthlevel(root, 2);
	cout << endl << endl;
	printALLLevel(root);

	cout << endl;

	bfs(root);
	cout << endl << endl;
	bfs2(root);


}













