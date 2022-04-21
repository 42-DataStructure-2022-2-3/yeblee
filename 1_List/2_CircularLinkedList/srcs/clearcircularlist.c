#include "../include/circularlist.h"

// 내부 node 전체 삭제
void    clearCircularList(CircularList *pList) 
{
	CircularListNode	*head;
	CircularListNode	*next;
	int					idx;

	head = pList->headerNode.pRLink->pRLink; // 0번째 node는 header 다음이다.
	while (idx < pList->currentElementCount) // 개수만큼 삭제한다.
	{
		next = head->pRLink;
		head->pRLink = NULL;
		free(head);
		head = next;
		idx++;
	}
	head = NULL;
	next = NULL;
	pList->currentElementCount = 0;
}