//#include <iostream>
//
//using namespace std;
//
///////��Ϊ��Ŀ�б���Ҫ�����ʱ�临�Ӷ�ΪO��n�����ռ临�Ӷ�O��1�������������ת������м�ʹ��ջ�洢�Ļ���������ռ临�Ӷ�Ҫ��
//
///////��������һ���µķ���������������⣬������ĺ�벿�ַ�ת��Ȼ�����±Ƚ�
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
//	 ///ָ��Ϊ�ջ��߽���һ��Ԫ��  True
//	 if (!head || !head->next)
//		 return true;
//
//	 ///����ָ��ķ�����Ѱ����������
//	 ListNode *slow, *fast;
//	 slow = fast = head;
//	 while (fast&&fast->next)
//	 {
//		 slow = slow->next;
//		 fast = fast->next->next;
//	 }
//
//	 if (fast){
//		 ///�����Ԫ��������
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
