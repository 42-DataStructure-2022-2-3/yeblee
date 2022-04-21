#include "../include/singlylinkedlist.h"

/*linked list를 비운다.*/
void clearLinkedList(LinkedList *pList)
{
	ListNode	*pDelNode;
	ListNode	*pNode;

	if (!pList)
		return ;
	pDelNode = pList->headerNode.pLink;
	while (pDelNode) {
		pNode = pDelNode->pLink;
		free(pDelNode);
		pDelNode = NULL;
		pDelNode = pNode;
	}
	pList->headerNode.pLink = NULL;
	pList->currentElementCount = 0;
}