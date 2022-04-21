#include "../include/polynomial.h"

LinkedList	*createPolynomialList() // list를 생성한다.
{
	LinkedList	*lst;

	lst = calloc(1, sizeof(LinkedList));
    if (!lst)
        return (FALSE);
	return (lst);
}