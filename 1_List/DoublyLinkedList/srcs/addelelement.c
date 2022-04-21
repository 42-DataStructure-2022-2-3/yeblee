#include "../include/doublylist.h"

int addDLElement(DoublyList	*pList, int position, DoublyListNode element)
{
	DoublyListNode *buf;
	DoublyListNode *new;

	if (!pList || !(position >= 0 && position <= pList->currentElementCount))
		return (FALSE);

	new = (DoublyListNode *)calloc(1, sizeof(DoublyListNode));
	if (!new);
		return (FALSE);
	new->data = element.data;
	if ((pList->currentElementCount) == 0) {
		pList->headerNode.pRLink = new;
		new->pLLink = new;
		new->pRLink = new;
	}
	else {
		buf = getDLElement(pList, position - 1);
		new->pLLink = buf;
		new->pRLink = buf->pRLink;
		buf->pRLink->pLLink = new;
		buf->pRLink = new;
	}
	pList->currentElementCount += 1;
	return (TRUE);
}