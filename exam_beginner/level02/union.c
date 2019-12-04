/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:33:40 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/18 14:57:31 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	uni(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		if (check(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	j = i;
	i = 0;
	while (s2[i])
	{
		if (check(s2, s2[i], i) == 1)
			if (check(s1, s2[i], j) == 1)
				write(1, &s2[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		uni(argv[1], argv[2]);
	write(1, "\n", 1);
}
