/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:10:11 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/21 16:30:19 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*char	main(void)
{
	char	n[] = "hello";
	char	m[] = "HOW";
	char	o[] = "bAbUiNa";

	printf("%s\n", ft_strupcase(n));
	printf("%s\n", ft_strupcase(m));
	printf("%s", ft_strupcase(o));
}*/
