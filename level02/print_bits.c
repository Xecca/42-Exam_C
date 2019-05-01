/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 01:06:06 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/16 01:12:33 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;

	i = 128;
	while (octet >= 0 && i)
	{
		(octet / i) ? write(1, "1", 1) : write(1, "0", 1);
		(octet / i) ? octet -= i : 0;
		i /= 2;
	}
}

void	print_bits2(unsigned char octet)
{
	int i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}

int	main(void)
{
	int n = 64;
	print_bits(n);
	write(1, "\n", 1);
	print_bits2(n);
}
