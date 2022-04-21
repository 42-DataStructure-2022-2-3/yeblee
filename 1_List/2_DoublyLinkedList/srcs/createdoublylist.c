#include "../include/doublylist.h"

DoublyList	*createDoublyList()
{
	DoublyList	*buf;

	buf = (DoublyList *)calloc(1, sizeof(DoublyList));
	if (!buf)
		return(FALSE);
	return (buf);
}