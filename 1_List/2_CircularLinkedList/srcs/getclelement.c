#include "../include/circularlist.h"

CircularListNode	*getCLElement(CircularList *pList, int position) // node 반환
{
	CircularListNode	*head;

    // if (!pList || !(position >= 0 && position <= pList->currentElementCount))
	// 	return (FALSE);
	head = pList->headerNode.pRLink->pRLink; // header 는 tail이므로 0 index는 header의 다음이 된다.
	// position 만큼 이동한다.
    while (position > 0) {
		head = head->pRLink;
		position--;
	}
	return (head);
}