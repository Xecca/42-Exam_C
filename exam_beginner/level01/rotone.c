/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 22:09:00 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/11 22:54:24 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int up;
	int down;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			up = argv[1][i] + 1;
			down = argv[1][i] - 25;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				write(1, &up, 1);
			else if (argv[1][i] == 'Z' || argv[1][i] == 'z')
				write(1, &down, 1);
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				write(1, &up, 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
