/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:46:42 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/12 16:54:49 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int up;
	int down;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			up = argv[1][i] - 65;
			down = argv[1][i] - 97;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				while (up >= 0)
				{
					write(1, &argv[1][i], 1);
					up--;
				}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				while (down >= 0)
				{
					write(1, &argv[1][i], 1);
					down--;
				}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
