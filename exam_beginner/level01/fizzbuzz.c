/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 18:17:52 by aponomar          #+#    #+#             */
/*   Updated: 2019/12/03 19:17:47 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main()
{
	int i;
	int n;
	char dig;

	i = 1;
	n = 0;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
		{
			n = i;
			while ((n / 10) >= 1)
			{
				dig = ((n % 10) + 48);
				n /= 10;
			}
			n = (n % 10) + 48;
			write(1, &n, 1);
			if (i > 10)
				write(1, &dig, 1);
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
