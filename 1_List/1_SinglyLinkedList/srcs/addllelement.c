#include "../include/singlylinkedlist.h"

/*linked list의 특정 위치에 node를 추가한다.*/
int addLLElement(LinkedList* pList, int position, ListNode element)  
{
	ListNode* pNode;
	ListNode* pNewNode;

	if (!pList || !(position >= 0 && position <= pList->currentElementCount))
		return (FALSE);
	
	pNewNode = (ListNode*)malloc(sizeof(ListNode));
	if (!pNewNode)
		return (FALSE);
	*pNewNode = element;
	pNewNode->pLink = NULL;
	if (position == 0) {
			pNewNode->pLink = pList->headerNode.pLink;
			pList->headerNode.pLink = pNewNode;
	} else {
		pNode = getLLElement(pList, position-1);
		pNewNode->pLink = pNode->pLink;
		pNode->pLink = pNewNode;
	}
	pList->currentElementCount++;
	return (TRUE);
}