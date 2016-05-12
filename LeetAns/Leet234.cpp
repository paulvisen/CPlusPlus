//#include <iostream>
//
//using namespace std;
//
///////因为题目中本身要求的是时间复杂度为O（n），空间复杂度O（1），如果将链表转存或者中间使用栈存储的话都不满足空间复杂度要求。
//
///////这里引入一种新的方法来处理这个问题，将链表的后半部分反转，然后重新比较
//
// struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
// ListNode* reverseList(ListNode* head) {
//	 if (head == NULL || head->next == NULL)
//		 return head;
//	 ListNode* newhead = head;
//	 while (newhead->next != NULL)
//		 newhead = newhead->next;
//	 reverse(head);
//	 return newhead;
// }
// ListNode* reverse(ListNode* head)
// {
//	 if (head->next == NULL)
//		 return head;
//	 else
//	 {
//		 ListNode* tail = reverse(head->next);
//		 tail->next = head;
//		 tail = tail->next;
//		 tail->next = NULL;
//		 return tail;
//	 }
// }
// bool isPalindrome(ListNode* head) {
//	 ///指针为空或者仅有一个元素  True
//	 if (!head || !head->next)
//		 return true;
//
//	 ///快慢指针的方法，寻找链表中心
//	 ListNode *slow, *fast;
//	 slow = fast = head;
//	 while (fast&&fast->next)
//	 {
//		 slow = slow->next;
//		 fast = fast->next->next;
//	 }
//
//	 if (fast){
//		 ///链表的元素是奇数
//		 slow->next = reverseList(slow->next);
//		 slow = slow->next;
//	 }
//	 else
//	 {
//		 slow = reverseList(slow);
//	 }
//
//	 while (slow){
//		 if (head->val != slow->val){
//			 return false;
//		 }
//		 slow = slow->next;
//		 head = head->next;
//	 }
//	 return true;
// }
//
//
