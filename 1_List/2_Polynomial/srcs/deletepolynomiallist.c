#include "../include/polynomial.h"

// 내부 node와 list를 삭제한다.
void	deletePolynomialList(LinkedList *pList)
{
	clearPolynomialList(pList);
	free(pList);
	pList = NULL;
}