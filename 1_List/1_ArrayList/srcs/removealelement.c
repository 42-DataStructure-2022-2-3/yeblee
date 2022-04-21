#include "../include/arrayList.h"

// 원소 지운다.
int removeALElement(ArrayList* pList, int position) 
{
    int i;

    i = position;
    pList->pElement[position].data = 0;                         // position의 값 지운 후
    while (i <= pList->currentElementCount - 1)
    {
        pList->pElement[i].data = pList->pElement[i + 1].data; // 값들을 앞으로 땡긴다.
        i++;
    }
    pList->pElement[i].data = 0;
    pList->currentElementCount -= 1;
    return (TRUE);
}