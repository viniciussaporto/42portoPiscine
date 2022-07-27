/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:50:27 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/25 16:36:50 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*char	main(void)
{
	char	n[] = "asdasdasd";
	char	m[] = "JIASDJFJ";
	char	o[] = "-**-*-";

	printf("%d\n", ft_str_is_alpha(n));
	printf("%d\n", ft_str_is_alpha(m));
	printf("%d", ft_str_is_alpha(o));
}*/
