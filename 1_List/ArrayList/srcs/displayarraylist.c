#include "../include/arrayList.h"

void ft_putnbr(int n)
{
    char c;

    if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
    if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
    c = n % 10 + '0';
	write(1, &c, 1);
}

// 모든 원소 출력
void displayArrayList(ArrayList* pList) 
{
    size_t  i;

    if (!pList)
        write(1, "(null)", 6);

    write(1, "maxElementCount is ", 19);
    ft_putnbr(pList->maxElementCount);
    write(1, "\n", 1);
    
    write(1, "currentElementCount is ", 23);
    ft_putnbr(pList->currentElementCount);
    write(1, "\n", 1);
    
    i = 0;
    write(1, "Elements is \n", 13);
    while(pList->pElement[i].data) {
        ft_putnbr(i);
        write(1, " : ", 3);
        ft_putnbr(pList->pElement[i].data);
        write(1, "\n", 1);
        i++;
    }
}