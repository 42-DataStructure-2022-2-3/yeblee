#ifndef _LINKED_QUEUE_
#define _LINKED_QUEUE_

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct LinkedQueueNodeType
{
	char data;
	struct LinkedQueueNodeType* pRLink;
	struct LinkedQueueNodeType* pLLink;
	
} QueueNode;

typedef struct LinkedQueueType
{
	int currentElementCount;	// 현재 원소의 개수
	QueueNode* pFrontNode;		// Front 노드의 포인터
	QueueNode* pRearNode;		// Rear 노드의 포인터
} LinkedQueue;

LinkedQueue* createLinkedQueue();
int insertFrontLD(LinkedQueue* pQueue, QueueNode element);
int insertRearLD(LinkedQueue* pQueue, QueueNode element);
QueueNode* deleteFrontLD(LinkedQueue* pQueue);
QueueNode* deleteRearLD(LinkedQueue* pQueue);
QueueNode* peekFrontLD(LinkedQueue* pQueue);
QueueNode* peekRearLD(LinkedQueue* pQueue);
void deleteLinkedQueue(LinkedQueue* pQueue);
int isLinkedQueueFull(LinkedQueue* pQueue);
int isLinkedQueueEmpty(LinkedQueue* pQueue);

#endif //_LINKED_QUEUE_

#ifndef _COMMON_QUEUE_DEF_
#define _COMMON_QUEUE_DEF_

#define TRUE		1
#define FALSE		0

#endif //_COMMON_QUEUE_DEF_