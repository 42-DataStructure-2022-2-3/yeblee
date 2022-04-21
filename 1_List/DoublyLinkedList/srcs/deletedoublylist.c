#include "../include/doublylist.h"

void	deleteDoublyList(DoublyList *pList)
{
	if (!pList)
		return ;
	clearDoublyList(pList);
	pList->headerNode.pRLink = NULL;
	pList->headerNode.pLLink = NULL;
	free(pList);
	pList = NULL;
}