/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:26:59 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/26 17:29:03 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	a[30] = "abluble";
	char	b[30] = "babuino";
	int	i = 5;

	printf("%s\n", a);
	printf("%s\n", b);
	int	diff = ft_strncmp(a, b, i);
	printf("%d\n", diff);
	int	test = strncmp(b, a, i);
	printf("%d", test);
	return (0);
}*/
