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
class Solution
{
public:
    ListNode *t;
    void reverse(ListNode *p, ListNode *q)
    {
        if (q == NULL)
        {
            t = p;
            return;
        }
        reverse(q, q->next);
        q->next = p;
    }
    ListNode *reverseList(ListNode *head)
    {

        reverse(NULL, head);

        return t;
    }
};