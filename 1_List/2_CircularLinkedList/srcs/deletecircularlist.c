#include "../include/circularlist.h"

// node와 list를 삭제한다.
void    deleteCircularList(CircularList *pList) 
{
	clearCircularList(pList);
	free(pList);
	pList = NULL;
}
