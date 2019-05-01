/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 14:48:11 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/11 15:31:27 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if ((int)argv[1][i] > 64 && (int)argv[1][i] < 91)
			{ 
				argv[1][i] += 32;
				write(1, &argv[1][i], 1);
			}
			else if ((int)argv[1][i] > 96 && (int)argv[1][i] < 123)
			{
				argv[1][i] -= 32;
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
