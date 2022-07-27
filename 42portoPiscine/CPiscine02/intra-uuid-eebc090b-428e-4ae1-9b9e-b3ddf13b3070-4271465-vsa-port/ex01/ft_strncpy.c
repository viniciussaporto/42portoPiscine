/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:52:34 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/25 16:35:38 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <string.h>
int	main(void)
{
	char	src[] = "source";
	char	dest[] = "destination";
	unsigned int	n = 2;

	printf("ANTES:\n\tSRC:%s\n\tDEST:%s\n\t", src, dest);
	ft_strncpy(dest, src, n);
	printf("DEPOIS:\n\tSRC:%s\n\tDEST:%s\n\t", src, dest);
	return (0);
}*/
