#include "../include/circularlist.h"

// 모든 node를 보여준다.
void    displayCircularList(CircularList *pList) 
{
	CircularListNode	*head;
	int					idx;

	head = pList->headerNode.pRLink->pRLink; // 0번째 node는 header 다음 node이다.
	idx = 0;
	while (idx < pList->currentElementCount)
	{
		printf("pList[%d] = %d\n", idx++, head->data);
		head = head->pRLink;
	}
}