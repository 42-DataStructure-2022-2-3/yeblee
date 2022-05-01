#include "../include/arrayqueue.h"

int main (void) {
    ArrayQueue *pQueue = NULL;
    ArrayQueueNode *pNode = NULL;
    ArrayQueueNode pElement;

    // 큐생성
    pQueue = createArrayQueue(5);
    if (!pQueue) {
        printf("큐 생성 실패");
        return 0;
    }
    pElement.data = '1';
    enqueueAQ(pQueue, pElement);
    pElement.data = '2';
    enqueueAQ(pQueue, pElement);
    pElement.data = '3';
    enqueueAQ(pQueue, pElement);
    pElement.data = '4';
    enqueueAQ(pQueue, pElement);
    // pElement.data = '5';
    // enqueueAQ(pQueue, pElement);
    displayArrayQueue(pQueue);
    printf("\n====================================================================\n");
    
    pNode = dequeueAQ(pQueue);
    printf("\ndequeueAQ : %c\n", pNode->data);
    free(pNode);
    displayArrayQueue(pQueue);
    printf("\n====================================================================\n");

    pNode = peekAQ(pQueue);
    printf("peakAQ : %c\n", pNode->data);
    free(pNode);
    displayArrayQueue(pQueue);
    printf("\n====================================================================\n");
    
    pElement.data = '6';
    enqueueAQ(pQueue, pElement);
    displayArrayQueue(pQueue);
    printf("\n====================================================================\n");
    deleteArrayQueue(pQueue);

    // system("leaks a.out");
    return 0;
}