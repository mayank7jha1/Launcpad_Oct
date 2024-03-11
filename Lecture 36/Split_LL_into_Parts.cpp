// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
class Solution {
    int length(ListNode* head) {
        int count = 0;
        while (head != NULL) {
            head = head->next;
            count += 1;
        }
        return count;
    }
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {

        int n = length(root);
        ListNode* head = root;
        int LeastNElements = n / k;
        int Extra = n % k;
        vector<ListNode*>ans;
        int count = 1;

        if (LeastNElements == 0) {
            //n<k;
            //Every Part Can have atmax 1 Element
            //and some part will have NULL.
            for (int i = 1; i <= k; i++) {

                if (head != NULL) {
                    ListNode* n = head->next;
                    head->next = NULL;
                    ans.push_back(head);
                    head = n;
                } else {
                    ans.push_back(NULL);
                }

            }

        } else {
            // n>=k

            while (head != NULL) {
                ans.push_back(head);
                int x = 0;
                if (Extra > 0) {
                    x = 1;
                    Extra -= 1;
                } else {
                    x = 0;
                }

                for (int i = 1; i < LeastNElements + x; i += 1) {
                    head = head->next;
                }


                ListNode* n = head->next;
                head->next = NULL;
                head = n;
                count += 1;
                if (count == k) {
                    //This is the Last Part
                    ans.push_back(head);
                    break;
                }
            }
        }

        return ans;

    }
};






