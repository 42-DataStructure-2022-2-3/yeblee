#ifndef _CIRCULAR_QUEUE_
#define _CIRCULAR_QUEUE_

typedef struct CircularQueueNodeType
{
	char data;
} CircularQueueNode;

typedef struct CircularQueueType
{
	int maxElementCount;		// 최대 원소 개수
	int currentElementCount;	// 현재 원소의 개수
	int front;					// front 위치
	int rear;					// rear 위치
	CircularQueueNode *pElement;	// 노드 저장을 위한 1차원 배열 포인터
} CircularQueue;

CircularQueue* createCircularQueue(int maxElementCount);
int enqueueAQ(CircularQueue* pQueue, CircularQueueNode element);
CircularQueueNode *dequeueAQ(CircularQueue* pQueue);
CircularQueueNode *peekAQ(CircularQueue* pQueue);
void deleteCircularQueue(CircularQueue* pQueue);
int isCircularQueueFull(CircularQueue* pQueue);
int isCircularQueueEmpty(CircularQueue* pQueue);

#endif //_CIRCULAR_QUEUE_

#ifndef _COMMON_QUEUE_DEF_
#define _COMMON_QUEUE_DEF_

#define TRUE		1
#define FALSE		0

#endif //_COMMON_QUEUE_DEF_