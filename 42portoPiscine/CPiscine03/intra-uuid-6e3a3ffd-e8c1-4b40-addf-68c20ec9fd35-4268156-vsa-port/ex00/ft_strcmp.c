/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:42:02 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/25 10:45:22 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
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
int	main(void)
{
	char	a[] = "Z";
	char	b[] = "A";

	printf("%s\n", a);
	printf("%s\n", b);
	int	diff = ft_strcmp(a, b);
	printf("%d\n", diff);
	int	test = strcmp(a, b);
	printf("%d", test);
	return (0);
}*/
