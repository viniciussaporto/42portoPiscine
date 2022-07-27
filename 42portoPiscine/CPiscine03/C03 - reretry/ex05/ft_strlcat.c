/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:32:48 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/26 19:08:20 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < (size - dlen - 1))
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dlen + slen);
}
/*int	main(void)
{
	char	src[] = "teste";
	char	dest[] = "ah";
	int		test;
	int		irl;

	test = ft_strlcat(dest, src, 7);
	printf("MY FUNCTION: %d\n\t", test);
	printf("STRING: %s%s", src, dest);
	strlcat(dest, src, 7);
	printf("REAL FUNCTION: %d\n\t", irl);
	printf("STRING: %s", dest);
	return (0);
}*/
