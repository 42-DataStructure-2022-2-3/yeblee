#include "../include/doublylist.h"

void	clearDoublyList(DoublyList *pList)
{
    DoublyListNode  *buf;
    DoublyListNode  *next;

    if (!pList)
		return ;
    buf = pList->headerNode.pRLink;
    while (pList->currentElementCount) {
        next = buf->pRLink;
        buf->data = 0x00;
        buf->pLLink = NULL;
        buf->pRLink = NULL;
        free(buf);
		pList->currentElementCount -= 1;
        buf = next;
    }
	buf = NULL;
	next = NULL;
	pList->currentElementCount = 0;
}