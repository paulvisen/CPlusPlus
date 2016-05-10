#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

	if (headA == NULL || headB == NULL)
		return NULL;
	ListNode * iter1 = headA;
	ListNode * iter2 = headB;
	int len1 = 1;
	while (iter1->next != NULL)
	{
		iter1 = iter1->next;
		len1++;
	}
	int len2 = 1;
	while (iter2->next != NULL){
		iter2 = iter2->next;
		len2++;
	}
	
	if (iter1 != iter2){
		return NULL;
	}

	if (len1 > len2){
		for (int i = 0; i < len1 - len2; i++){
			headA = headA->next;
		}
	}
	else if (len1 < len2){
		for (int i = 0; i < len2 - len1; i++){
			headB = headB->next;
		}
	}
	while (headA != headB){
		headA = headA->next;
		headB = headB->next;
	}
	return headA;

}


