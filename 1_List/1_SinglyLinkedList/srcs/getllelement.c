#include "../include/singlylinkedlist.h"

/*linked list의 특정 위치에 있는 node값 반환한다.*/
ListNode*	getLLElement(LinkedList *pList, int position)
{
	ListNode	*pNode;

	if (!pList || !(position >= 0 && position <= pList->currentElementCount))
		return (FALSE);
	pNode = pList->headerNode.pLink;
	while (position--)
		pNode = pNode->pLink;
	return (pNode);
}