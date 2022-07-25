/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:47:31 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/25 10:55:34 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	a[] = "ZAZ";
	char	b[] = "AZI";
	int	i = 4;

	printf("%s\n", a);
	printf("%s\n", b);
	int	diff = ft_strncmp(a, b, i);
	printf("%d\n", diff);
	int	test = strncmp(a, b, i);
	printf("%d", test);
	return (0);
}*/
