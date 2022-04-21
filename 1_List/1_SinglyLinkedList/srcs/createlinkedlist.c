#include "../include/singlylinkedlist.h"

/*linked list를 만든다*/
LinkedList*	createLinkedList()
{
	LinkedList	*pList;

	pList = (LinkedList *)calloc(1, sizeof(LinkedList));
	if (!pList)
		return (FALSE);
	return (pList);
}