#include "../include/arrayList.h"

// ArrayList node 추가
int addALElement(ArrayList* pList, int position, ArrayListNode element) 
{
    int i;

    if (pList->maxElementCount <= position)                     // max 넘겨 node 추가할 때
        return (FALSE);
    if (pList->maxElementCount < pList->currentElementCount)    // 원소 + 1 <= maxCount
        return (FALSE);
    i = pList->currentElementCount + 1;                         // node 추가를 위한 인덱싱
    while(i >= position) {
        pList->pElement[i].data = pList->pElement[i - 1].data;  // 원래 값들을 한 칸 뒤로 이동시킨다.
        i--;
    }
    pList->pElement[position].data = element.data;              // position 에 원하는 값 입력
    pList->currentElementCount += 1;
    return (TRUE);
}