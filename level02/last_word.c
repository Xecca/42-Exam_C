/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 21:14:13 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/12 11:12:04 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		i--;
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i--;
		while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			i--;
		i++;
		while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
