#include "../include/arrayList.h"

// 원하는 위치의 주소값 반환
ArrayListNode* getALElement(ArrayList* pList, int position) 
{
    return &(pList->pElement[position]); 
}