#include "../include/arrayList.h"

// list 꽉 찼는지 여부
int isArrayListFull(ArrayList* pList) 
{
    return (pList->maxElementCount == pList->currentElementCount);
}