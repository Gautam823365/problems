// Definition for singly-linked list.
  public class ListNode {
      int val;
      ListNode next;
      ListNode() {}
      ListNode(int val) { this.val = val; }
      ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }
 
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
         ListNode dummyNode = new ListNode(-1);
        // Pointer to traverse the merged list
        ListNode mergedPtr = dummyNode;

        // Traverse both lists simultaneously
        while (list1 != null && list2 != null) {
            if (list1.val <= list2.val) {
                // Append the node from list1 to the merged list
                mergedPtr.next = list1;
                list1 = list1.next;
            } else {
                // Append the node from list2 to the merged list
                mergedPtr.next = list2;
                list2 = list2.next;
            }
            // Move the pointer of the merged list forward
            mergedPtr = mergedPtr.next;
        }

        // Add remaining nodes from list1 or list2 to the merged list
        if (list1 != null) {
            mergedPtr.next = list1;
        } else {
            mergedPtr.next = list2;
        }

        // Return the head of the merged list (excluding the dummy node)
        return dummyNode.next;
    }

    
}