#ifndef _LINKED_QUEUE_
#define _LINKED_QUEUE_

typedef struct LinkedQueueNodeType
{
	char data;
} LinkedQueueNode;

typedef struct LinkedQueueType
{
	int maxElementCount;		// 최대 원소 개수
	int currentElementCount;	// 현재 원소의 개수
	int front;					// front 위치
	int rear;					// rear 위치
	LinkedQueueNode *pElement;	// 노드 저장을 위한 1차원 배열 포인터
} LinkedQueue;

LinkedQueue* createLinkedQueue(int maxElementCount);
int enqueueAQ(LinkedQueue* pQueue, LinkedQueueNode element);
LinkedQueueNode *dequeueAQ(LinkedQueue* pQueue);
LinkedQueueNode *peekAQ(LinkedQueue* pQueue);
void deleteLinkedQueue(LinkedQueue* pQueue);
int isLinkedQueueFull(LinkedQueue* pQueue);
int isLinkedQueueEmpty(LinkedQueue* pQueue);

#endif //_LINKED_QUEUE_

#ifndef _COMMON_QUEUE_DEF_
#define _COMMON_QUEUE_DEF_

#define TRUE		1
#define FALSE		0

#endif //_COMMON_QUEUE_DEF_