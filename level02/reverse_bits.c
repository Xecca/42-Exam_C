/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 23:05:25 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/15 23:08:27 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char b)
{
	unsigned char	r = 0;
	unsigned		char_len = 8;

	while (char_len--)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
	}
	return (r);
}
