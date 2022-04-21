#include "../include/arrayList.h"

// ArrayList 생성
ArrayList* createArrayList(int maxElementCount) 
{
    ArrayList *buf;

    if (maxElementCount < 0)
        return (FALSE);
    buf = malloc(sizeof(ArrayList *));
    buf->pElement = malloc(sizeof(int) * maxElementCount);
    buf->maxElementCount = maxElementCount;
    buf->currentElementCount = 0;
    return (buf);
}