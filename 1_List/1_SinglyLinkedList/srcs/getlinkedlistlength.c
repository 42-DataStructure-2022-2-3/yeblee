#include "../include/singlylinkedlist.h"

/*linked list의 길이를 반환한다.*/
int	getLinkedListLength(LinkedList *pList)
{
	if (!pList)
		return (FALSE);
	return (pList->currentElementCount);
}