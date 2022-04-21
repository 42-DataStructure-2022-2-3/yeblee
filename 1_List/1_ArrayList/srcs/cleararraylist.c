// 원소를 지운다.
void clearArrayList(ArrayList* pList) 
{
    size_t  i;

    i = 0;
    while (pList->pElement[i].data) {
        pList->pElement[i].data = 0;
        i++;
    }
    pList->currentElementCount = 0;
    free(pList->pElement);
    pList->pElement = NULL;
}