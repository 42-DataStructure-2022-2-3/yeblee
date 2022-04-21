#include "../include/doublylist.h"

int removeDLElement(DoublyList *pList, int position)
{
    DoublyListNode	*buf;

	if (!pList || !(position >= 0 && position < pList->currentElementCount))
		return (FALSE);
	if (position == 0) {
		buf = pList->headerNode.pRLink;
		buf->pRLink->pLLink = buf->pLLink;
		buf->pLLink->pRLink = buf->pRLink;
	}
	else {
		buf = getDLElement(pList, position);
		buf->pLLink->pRLink = buf->pRLink;
		buf->pRLink->pLLink = buf->pLLink;
	}
	free(buf);
	buf = NULL;
    pList->currentElementCount -= 1;
    return (TRUE);
}