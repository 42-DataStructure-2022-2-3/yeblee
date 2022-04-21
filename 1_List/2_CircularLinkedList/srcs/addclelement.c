#include "../include/circularlist.h"

// 원소 추가
int	addCLElement(CircularList *pList, int position, CircularListNode element) // node 추가
{
	CircularListNode	*buf;
	CircularListNode	*new;

	if (!pList || !(position >= 0 && position <= pList->currentElementCount))
		return (FALSE);
	
	new = calloc(1, sizeof(CircularListNode));
	new->data = element.data;
    // node가 없는 경우
	if ((pList->currentElementCount) == 0) {
		pList->headerNode.pRLink = new;         	// header 지정
		new->pRLink = pList->headerNode.pRLink; 	// pRlink를 자기 자신으로 하여 순회할 수 있게 한다.
	}
    // node가 있는 경우
	else {
		buf = getCLElement(pList, position - 1);    // 삽입할 포지션 전의 것을 지정한다.
		new->pRLink = buf->pRLink;                  // node 간 연결
		buf->pRLink = new;
		if (position == pList->currentElementCount) // 만약 position이 맨 끝일 경우 header 로 지정한다.
			pList->headerNode.pRLink = new;
	}
	pList->currentElementCount += 1;                // node 개수를 늘려준다.
	return (TRUE);
}
