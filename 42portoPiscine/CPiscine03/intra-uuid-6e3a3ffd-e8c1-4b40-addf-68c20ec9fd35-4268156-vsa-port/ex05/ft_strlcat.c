/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:32:48 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/25 19:49:59 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

unsigned int	ft_strlcat(char *str, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dtln;
	unsigned int	srcln;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	dtln = j;
	srcln = ft_strlen(src);
	if (size == 0 || size <= dtln)
		return (srcln + size);
	while (src[i] != '\0' && i < size - dtln - 1)
	{
		str[j] = src[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (dtln + srcln);
}
/*#include <stdio.h>
#include <bsd/string.h>
int    main(void)
{
    char    src[30] = "Kiki";
    char    dest[30] = "EI";
    char	*test;

    ft_strlcat(src, dest, 10);
    printf("%s \n\t", src); 
    printf("%s \n", src);
    test = strlcat(src, dest, 10);
    printf("%d", test);
    return (0);
}*/
