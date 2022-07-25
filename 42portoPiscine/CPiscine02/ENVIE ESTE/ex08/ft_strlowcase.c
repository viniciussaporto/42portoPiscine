/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:31:15 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/21 16:37:57 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*char	main(void)
{
	char	n[] = "ABLUBLE";
	char	m[] = "FLUMINENSE";
	char	o[] = "vInIcIuS";

	printf("%s\n", ft_strlowcase(n));
	printf("%s\n", ft_strlowcase(m));
	printf("%s", ft_strlowcase(o));
}*/
