#include "../include/singlylinkedlist.h"

void displayLinkedList(LinkedList *pList)
{
    int         i;
    ListNode 	*pNode;

    if (!pList)
        return ;
    i = 0;
    pNode = pList->headerNode.pLink;
    while (pNode)
	{
		printf("singlylinkedlist[%d]: %d\n", i++, pNode->data);
		pNode = pNode->pLink;
	}
}