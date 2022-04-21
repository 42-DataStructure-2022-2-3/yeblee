#include "../include/circularlist.h"

// list 생성
CircularList	*createCircularList() 
{
	CircularList	*lst;

	lst = calloc(1, sizeof(CircularList)); // list 초기화
	return (lst);
}