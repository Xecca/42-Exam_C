/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:27:07 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/15 22:31:34 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
	int a;

	j = 0;
	if (argc == 3)
	{
		while (argv[1][j])
		{
			a = 0;
			i = 0;
			while (i < j)
			{
				if (argv[1][i] == argv[1][j])
				{
					a = 1;
					break;
				}
				i++;
			}
			if (a == 0)
			{
				i = 0;
				while (argv[2][i])
				{
					if (argv[1][j] == argv[2][i])
					{
						write(1, &argv[1][j], 1);
						break;
					}
					i++;
				}
			}
			j++;
		}
	}
	write(1, "\n", 1);
}
