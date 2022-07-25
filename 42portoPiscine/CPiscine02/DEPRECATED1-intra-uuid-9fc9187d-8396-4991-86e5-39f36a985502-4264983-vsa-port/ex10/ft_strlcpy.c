/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:20:07 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/22 10:21:04 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		i;
	char	*a;	
	char	*b;

	a = dest;
	b = src;
	i = 0;
	if (size > 0)
	{
		while (*b != '\0' && i < size - 1)
		{
			*a = *b;
			a++;
			b++;
			i++;
		}
	}
	*a = '\0';
	return (i);
}
/*int	main(void)
{
	char	src[] = "Atletico";
	char	dest[] = "teste";
	unsigned int	size = 4;
	ft_strlcpy(dest, src, size);
	printf("%d\n", size);
}*/
