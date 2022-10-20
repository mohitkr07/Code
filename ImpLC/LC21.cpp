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

// Solution 1
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        ListNode *l1 = list1;
        ListNode *l2 = list2;

        if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
        {
            return l1;
        }
        if (l1->val <= l2->val)
        {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};

// Solution 2

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;
        ListNode *t1 = list1;
        ListNode *t2 = list2;
        ListNode *head, *p;
        if (t1->val < t2->val)
        {
            ListNode *t = new ListNode;
            t->val = t1->val;
            t1 = t1->next;
            head = t;
            p = t;
        }
        else
        {
            ListNode *t = new ListNode;
            t->val = t2->val;
            t2 = t2->next;
            head = t;
            p = t;
        }

        while (1)
        {
            if (t1 == NULL || t2 == NULL)
            {
                if (t1 == NULL)
                {
                    p->next = t2;
                }
                else
                    p->next = t1;
                break;
            }
            if (t1->val < t2->val)
            {
                ListNode *t = new ListNode;
                t->val = t1->val;
                p->next = t;
                t1 = t1->next;
                p = p->next;
            }
            else
            {
                ListNode *t = new ListNode;
                t->val = t2->val;
                p->next = t;
                t2 = t2->next;
                p = p->next;
            }
        }

        return head;
    }
};