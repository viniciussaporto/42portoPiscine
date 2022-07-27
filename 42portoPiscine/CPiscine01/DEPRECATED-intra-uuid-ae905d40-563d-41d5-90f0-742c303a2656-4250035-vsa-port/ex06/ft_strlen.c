/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:15:41 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/20 16:15:43 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	char	*a;

	a = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - a);
}

/*int	main(void)
{
	char	b[5] = "teste";
	char	*c = b;
	int	cnt = ft_strlen(c);

	printf("%d\n", cnt);
	return (0);
}*/
