/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:05:23 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/25 19:17:33 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[j + i] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	char	str[] = "Hello my name is vinicius 42porto";
	char	to_find[] = "diana";
	char	*test;

	printf("Substring: %s\n\t", ft_strstr(str, to_find));
	test = strstr(str, to_find);
	printf("The real function substring: %s", test);
	return (0);
}*/
