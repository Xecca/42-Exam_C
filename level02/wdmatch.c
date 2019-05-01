/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:18:46 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/15 22:24:38 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
	int count;

	count = 0;
	j = 0;
	i = 0;
	if (argc == 3)
	{
		while (argv[2][i])
		{
			if (argv[1][j] == argv[2][i])
			{
				count++;
				j++;
			}
			i++;
		}
		i = 0;
		while (argv[1][i])
			i++;
		if (count == i)
		{
			j = 0;
			while (argv[1][j])
				write(1, &argv[1][j++], 1);
		}
	}
	write(1, "\n", 1);
}
