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
		printf("[%d]: %d\n", i++, pNode->data);
		pNode = pNode->pLink;
	}
    free(pNode);
	printf("\n");
}