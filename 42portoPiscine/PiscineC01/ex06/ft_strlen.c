#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	char *a;

	a = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - a);
}

int	main(void)
{
	char b[5] = "teste";
	int cnt = ft_strlen(b);

	print("%d\n", cnt);
	return (0);
}
