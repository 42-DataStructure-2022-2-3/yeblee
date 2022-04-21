#include "../include/circularlist.h"

// 개별 node 삭제
int	removeCLElement(CircularList *pList, int position)
{
	CircularListNode	*buf;
	CircularListNode	*delNode;

    // postion이 0 이라면
	if (position == 0) {
		delNode = pList->headerNode.pRLink->pRLink; // 삭제할 node
		buf = pList->headerNode.pRLink;             // header
		buf->pRLink = delNode->pRLink;              // header의 다음을 delnode의 다음으로 지정한다.
	}
    // position이 0이 아니라면
	else {
		buf = getCLElement(pList, position - 1);    // position 전의 node
		delNode = getCLElement(pList, position);    // position node
		buf->pRLink = delNode->pRLink;              // 이어준다.
	}
	free(delNode);
	delNode = NULL;
	pList->currentElementCount--;
	return (TRUE);
}
