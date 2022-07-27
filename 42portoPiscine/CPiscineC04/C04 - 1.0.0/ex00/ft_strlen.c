/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:17:49 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/27 10:34:03 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*#include <stdio.h>
int	main(void)
{
	char	b[2] = "oi";
	char	*c = b;
	int	cnt = ft_strlen(c);

	printf("%d\n", cnt);
	return (0);
}*/
