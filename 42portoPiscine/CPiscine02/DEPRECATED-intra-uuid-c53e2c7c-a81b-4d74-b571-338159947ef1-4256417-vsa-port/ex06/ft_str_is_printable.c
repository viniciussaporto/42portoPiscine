/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:22:02 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/21 16:07:26 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char	n[] = "aaaaaa";
	char	m[] = "ÅÄÄÄÄ";
	char	o[] = "ÄÄÄÄÄÄ";

	printf("%d\n", ft_str_is_printable(n));
	printf("%d\n", ft_str_is_printable(m));
	printf("%d", ft_str_is_printable(o));
}*/
