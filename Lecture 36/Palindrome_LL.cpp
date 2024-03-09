
struct ListNode {

	int val;
	ListNode *next;


	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// class ListNode {
// public:
// 	int val;
// 	ListNode *next;

// 	ListNode() {
// 		val = 0;
// 		next = NULL;
// 	}

// 	ListNode(int x) {
// 		val = x;
// 		next = NULL;
// 	}

// 	ListNode(int x, ListNode *n) {
// 		val = x;
// 		next = n;
// 	}

// };


class Solution {

	//First Mid Point Ka Logic.
	ListNode* midPoint2(ListNode* head) {

		ListNode* slow = head;
		ListNode* fast = head->next;

		while (fast != nullptr and fast->next != nullptr) {
			// fast = fast->next;
			// fast = fast->next;
			fast = fast->next->next;
			slow = slow->next;
		}

		return slow;
	}

	void ReverseIterative(ListNode* &head) {
		ListNode* current = head;
		ListNode* prev = nullptr;
		ListNode* n;

		while (current != nullptr) {
			n = current->next;
			current->next = prev;
			prev = current;
			current = n;

		}

		head = prev;
	}

public:
	bool isPalindrome(ListNode* head) {
		ListNode* m = midPoint2(head);
		ListNode* h = head;
		ListNode* h1 = m->next;
		m->next = nullptr;
		ReverseIterative(h1);
		while (h1 != nullptr) {
			if (h1->val != h->val) {
				return false;
			}
			h = h->next;
			h1 = h1->next;
		}
		return true;
	}
};





// int x = 10;
// int y = {30};
// int z{45};
// int m(567);