// Code 

// Definition for a binary tree node.
/*
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
*/
class Solution 
{
public:
    bool isPalindrome(ListNode* head) 
    {
        if (!head)
            return false;

        ListNode* temp = head;
        stack<int> s;

        while (temp)
        {
            s.push(temp->val);
            temp = temp->next;
        }

        temp = head;

        while (temp)
        {
            if (temp->val != s.top())
                return false;

            s.pop();
            temp = temp->next;
        }

        return true;
    }
};
