/*Given the head of a linked list, determine whether the list contains a cycle. Return true if a node can be visited again; otherwise, return false.
 Example 1:
- Input: head = [3,2,0,-4], tail connects to index 1
- Output: true
- Explanation: The last node points back to node 2, forming a cycle. */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
}
