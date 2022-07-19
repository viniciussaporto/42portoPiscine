#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *b)
{
	int a;

	a = 0;
	while (b[a] != '\0')
	{
		a++;
	}
	return (0);
}

int	main(void)
{
	char b[] = "teste";
	int cnt = ft_strlen(b);

	print("%d\n", cnt);
}
