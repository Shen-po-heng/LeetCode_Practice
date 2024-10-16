# 141. Linked List Cycle

Question description:https://leetcode.com/problems/linked-list-cycle/description/?envType=study-plan-v2&envId=top-interview-150

My 1st try (16.10.2024) was okay.

My idea: use hashmap to check wheather the node is repeated or not, but to recored the address instead of value.
This method is similar to recommended solution, however, I just know there is another function called unoredered_set, I think it wiil be better to use, because in this case, you don't have to store key-value pair.

----------

The other way is Floyd's Cycle Detection.
[The following contenct from ChatGPT]
Floyd’s Cycle Detection Algorithm (also called the Tortoise and Hare algorithm) works because it takes advantage of the different speeds of two pointers to detect a cycle in a linked list. Here's a detailed explanation of why this method works:

Key Idea:
In a cycle, if you have two pointers:

Tortoise (slow): This pointer moves one step at a time.
Hare (fast): This pointer moves two steps at a time.
If there is a cycle, the fast pointer will eventually "lap" or catch up with the slow pointer. If there is no cycle, the fast pointer will reach the end of the list (nullptr).

Why It Works:
In case of no cycle:

The fast pointer will reach the end of the list (nullptr), since it moves two steps at a time.
If the list has n nodes and there is no cycle, after about n/2 steps, the fast pointer will hit the end of the list while the slow pointer will still be in the middle. The function then returns false because the list is linear and has no cycle.
In case of a cycle:

Initially, the fast pointer is moving at twice the speed of the slow pointer.
If a cycle exists, the fast pointer will eventually enter the cycle.
Once inside the cycle, the fast pointer will continue to close the distance between itself and the slow pointer because it moves faster.
Eventually, the fast pointer will "lap" the slow pointer, meaning both pointers will point to the same node. This indicates a cycle.
Visual Example:
Let’s take an example of a linked list with a cycle:

rust
Copy code
1 -> 2 -> 3 -> 4 -> 5 -> 2 (cycle starts back at node 2)
Initially, both pointers start at node 1.
After the first move:
Slow is at node 2.
Fast is at node 3.
After the second move:
Slow is at node 3.
Fast is at node 5.
After the third move:
Slow is at node 4.
Fast has cycled back to node 3.
After the fourth move:
Slow is at node 5.
Fast is at node 5.
Here, both pointers meet at node 5, meaning a cycle has been detected.

Why This Works Efficiently:
Time Complexity:

Both pointers traverse the list at different speeds, but the fast pointer never skips nodes entirely.
In the worst case, they will meet inside the cycle after at most n steps, where n is the number of nodes before the cycle starts. After entering the cycle, they will meet within one cycle length.
The time complexity is O(n), where n is the number of nodes in the list.
Space Complexity:

This algorithm only uses two pointers, so it has a space complexity of O(1) (constant space). Unlike the hash map approach, which uses extra memory to store nodes, this method is space-efficient.
Conclusion:
Floyd’s Cycle Detection Algorithm works because the fast pointer moves at twice the speed of the slow pointer. If there is a cycle, the fast pointer will eventually "lap" the slow pointer, allowing you to detect the cycle in O(n) time with O(1) space.