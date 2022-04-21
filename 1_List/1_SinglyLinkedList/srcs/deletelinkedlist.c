#include "../include/singlylinkedlist.h"

/*linked list를 삭제한다.*/
void	deleteLinkedList(LinkedList *pList)
{
	if (!pList)
		return ;
	clearLinkedList(pList);
	free(pList);
	pList = NULL;
}