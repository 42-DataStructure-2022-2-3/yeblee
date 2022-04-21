#include "../include/doublylist.h"

DoublyListNode	*getDLElement(DoublyList *pList, int position)
{
	DoublyListNode	*buf;

	if (!pList || !(position >= 0 && position <= pList->currentElementCount))
		return (FALSE);
	buf = pList->headerNode.pRLink;
	while (position) {
		buf = buf->pRLink;
		position -= 1;
	}
	return(buf);
}