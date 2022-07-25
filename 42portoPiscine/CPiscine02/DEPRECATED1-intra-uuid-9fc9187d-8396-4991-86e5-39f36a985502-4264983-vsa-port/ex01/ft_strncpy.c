/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:52:34 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/25 14:11:02 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	p[] = "teste 42";
	char	*src = p;
	char	dest[] = "teste";
	int	n = 2;

	printf ("%s\n", dest);
	ft_strncpy (dest, src, n);
	printf ("%s\n", dest);
	printf ("size of array: %d\n", n);
	strncpy(dest, src, n);
	printf("strncpy example: %s", dest);
	return (0);
}*/
