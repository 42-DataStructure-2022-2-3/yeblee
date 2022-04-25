#include "../include/singlylinkedlist.h"

/*linked list의 특정 위치에 node를 추가한다.*/
int addLLElement(LinkedList* pList, int position, ListNode element)  
{
	ListNode* pNode;
	ListNode* pNewNode;

	if (!pList || !(position >= 0 && position <= pList->currentElementCount))
		return (FALSE);
	
	pNewNode = (ListNode*)malloc(sizeof(ListNode));
	if (!pNewNode)
		return (FALSE);
	*pNewNode = element;
	pNewNode->pLink = NULL;
	if (position == 0) {
			pNewNode->pLink = pList->headerNode.pLink;
			pList->headerNode.pLink = pNewNode;
	} else {
		pNode = getLLElement(pList, position-1);
		pNewNode->pLink = pNode->pLink;
		pNode->pLink = pNewNode;
	}
	pList->currentElementCount++;
	return (TRUE);
}

/*linked list를 비운다.*/
void clearLinkedList(LinkedList *pList)
{
	ListNode	*pDelNode;
	ListNode	*pNode;

	if (!pList)
		return ;
	pDelNode = pList->headerNode.pLink;
	while (pDelNode) {
		pNode = pDelNode->pLink;
		free(pDelNode);
		pDelNode = NULL;
		pDelNode = pNode;
	}
	pList->headerNode.pLink = NULL;
	pList->currentElementCount = 0;
}

/*linked list를 만든다*/
LinkedList*	createLinkedList()
{
	LinkedList	*pList;

	pList = (LinkedList *)calloc(1, sizeof(LinkedList));
	if (!pList)
		return (FALSE);
	return (pList);
}

/*linked list를 삭제한다.*/
void	deleteLinkedList(LinkedList *pList)
{
	if (!pList)
		return ;
	clearLinkedList(pList);
	free(pList);
	pList = NULL;
}

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

/*linked list의 길이를 반환한다.*/
int	getLinkedListLength(LinkedList *pList)
{
	if (!pList)
		return (FALSE);
	return (pList->currentElementCount);
}

/*linked list의 특정 위치에 있는 node값 반환한다.*/
ListNode*	getLLElement(LinkedList *pList, int position)
{
	ListNode	*pNode;

	if (!pList || !(position >= 0 && position <= pList->currentElementCount))
		return (FALSE);
	pNode = pList->headerNode.pLink;
	while (position--)
		pNode = pNode->pLink;
	return (pNode);
}

/*linked list의 특정 위치에 있는 node를 제거한다.*/
int removeLLElement(LinkedList *pList, int position)
{
	ListNode	*pDelNode;
	ListNode	*pNode;

	if (!pList || !(position >= 0 && position < pList->currentElementCount))
		return (FALSE);
	if (position == 0) {
		pDelNode = pList->headerNode.pLink;
		pList->headerNode.pLink = pDelNode->pLink;
	} else {
		pNode = getLLElement(pList, position - 1);
		pDelNode = pNode->pLink;
		pNode->pLink = pDelNode->pLink;
	}
	free(pDelNode);
	pDelNode = NULL;
	pList->currentElementCount--;
	return (TRUE);
}