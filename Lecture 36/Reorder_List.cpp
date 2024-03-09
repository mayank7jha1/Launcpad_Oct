/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    //Second Mid Point Ka Logic.
    ListNode* midPoint2(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

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
    void reorderList(ListNode* head) {

    }
};