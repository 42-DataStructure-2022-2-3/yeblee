#include "../include/singlylinkedlist.h"

/*linked list의 특정 위치에 있는 node를 제거한다.*/
int removeLLElement(LinkedList *pList, int position)
{
	ListNode	*pDelNode;
	ListNode	*pNode;

	if (!pList || !(position >= 0 && position < pList->currentElementCount))
		return (FALSE);
	if (position == 0) {
		pDelNode = pList->headerNode.pLink;
		pList->headerNode.pLink = pDelNode->pLink;
	} else {
		pNode = getLLElement(pList, position - 1);
		pDelNode = pNode->pLink;
		pNode->pLink = pDelNode->pLink;
	}
	free(pDelNode);
	pDelNode = NULL;
	pList->currentElementCount--;
	return (TRUE);
}