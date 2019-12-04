/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:31:24 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/12 16:32:14 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 4)
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
			{
				while (argv[1][i])
				{
					if (argv[1][i] == argv[2][0])
					{
						argv[1][i] = argv[3][0];
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
