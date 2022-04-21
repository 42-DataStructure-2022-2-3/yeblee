#include "../include/polynomial.h"

// 차수가 같은지 판별하여 더해준다.
int	find_degree(LinkedList *pList, ListNode element) 
{
	ListNode	*headNode;
	int			i;

	headNode = pList->headerNode.pRLink->pLLink;            // 뒤에서 부터 찾는다.
	i = pList->currentElementCount;
	while (i-- && !(headNode->degree == element.degree))
		headNode = headNode->pLLink;
    // 차수가 같다면
	if (headNode->degree == element.degree) {
		headNode->coef += element.coef;                     // 더해준다.
		if (headNode->coef == 0)                            // 더한 결과가 0이라면 remove
			removePLElement(pList, i);
		return (TRUE);
	}
	return (FALSE);
}

int	addPLElement(LinkedList *pList, ListNode element)
{
	ListNode	*newNode;
	ListNode	*headNode;
	int			i;

	newNode = calloc(1, sizeof(ListNode));
	newNode->coef = element.coef;
	newNode->degree = element.degree;
    // header node 일 경우
	if (pList->currentElementCount == 0) { 
		pList->headerNode.pRLink = newNode;         // header로 지정한다.
		newNode->pLLink = pList->headerNode.pRLink; // 자기 자신을 지칭하게 한다.
		newNode->pRLink = newNode;
	}
	else {
        // 만약 같은 차수가 있다면, 기존 node에 더해준다.
		if (find_degree(pList, element)) {
			free(newNode);
			newNode = NULL;
			return (TRUE);
		}
		i = 0;
		headNode = pList->headerNode.pRLink->pLLink; // 뒤에서 부터 찾아준다.
		// 새로 들어올 node의 차수가 더 작을 때 멈춰 차수로 정렬한다.
		while (headNode->degree < newNode->degree) {
			if (i++ == pList->currentElementCount)  // while 문은 node 개수만큼만 반복한다.
				break ;
			headNode = headNode->pLLink;
		}
		newNode->pLLink = headNode;                 // 기존 list에 삽입한다.
		newNode->pRLink = headNode->pRLink;
		headNode->pRLink->pLLink = newNode;
		headNode->pRLink = newNode;
		headNode = &(pList->headerNode);
		// 만약 갱신된 node의 차수가 더 크다면 header를 갱신한다.
		if (headNode->pRLink->pLLink->degree - headNode->pRLink->degree > 0) 
			headNode->pRLink = headNode->pRLink->pLLink;
	}
	pList->currentElementCount++;
	return (TRUE);
}