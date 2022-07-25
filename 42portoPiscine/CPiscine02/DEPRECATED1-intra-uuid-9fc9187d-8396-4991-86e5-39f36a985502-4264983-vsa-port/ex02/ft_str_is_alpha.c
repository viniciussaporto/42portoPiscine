/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:50:27 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/25 14:43:05 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' && str[i] > 'Z') || (str[i] < 'a' && str[i] > 'z'))
		{
			return (0);
		}
		return (1);
		i++;
	}
}
#include <stdio.h>
char	main(void)
{
	char	n[] = "asdasdasd";
	char	m[] = "564321";
	char	o[] = "*-+++..";

	printf("%d\n", ft_str_is_alpha(n));
	printf("%d\n", ft_str_is_alpha(m));
	printf("%d", ft_str_is_alpha(o));
}*/
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		else if (str[0] == '\0')
		{
			return (1);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{	
	char	str[] = "asdfasdf";
	char	str1[] = "";
	char	str2[] = "8927435";
	
	printf("%d",ft_str_is_alpha(str));
	printf("%d",ft_str_is_alpha(str1));
	printf("%d",ft_str_is_alpha(str2));
	return (0);
}*/
