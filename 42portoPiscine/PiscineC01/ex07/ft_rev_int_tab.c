#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	c;
	int	tr[size];

	c = 0;
	index = size - 1;
	while(index > 0)
	{
		tr[c] = tr[index];
		index--;
		c--;
	}
	while(c < size)
	{
		tab[c] = tr[c];
		c++;
	}


}

int	main(void)
{
	int	tr[] = {1, 2, 3, 4};
	int	size;

	size = 4;

	printf("tamanho original: ");

}
