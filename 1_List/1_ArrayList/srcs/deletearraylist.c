#include "../include/arrayList.h"

//모든 원소와 list를 지운다. 
void deleteArrayList(ArrayList* pList) 
{
    clearArrayList(pList);
    free(pList);
    pList = NULL;
}