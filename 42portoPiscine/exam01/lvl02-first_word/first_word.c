/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:07:07 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/22 15:13:51 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i] == '\t')
			i++;
		else if (str[i] != ' ' || str[i] != '\t' || str[i] != '\0')
			{
				write(1, &str[i], 1);
				i++;
			}
	}
	return (str);
}

int	main(int ac, char **arg)
{
	if (ac == 2)
	{
		first_word(arg[1]);
	}
}