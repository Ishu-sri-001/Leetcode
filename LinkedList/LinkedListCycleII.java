/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        HashSet<ListNode> set=new HashSet();
        while(head!=null)
        {
            if (!set.contains(head))
                set.add(head);
            else if (set.contains(head))
                return head;
            head=head.next;
        }
        return null;
    }
}
