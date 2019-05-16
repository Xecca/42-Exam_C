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

void    print_bits(unsigned char octet)
{
    int div;

    div = 64;
    while (div != 0)
    {
        if (div <= octet)
        {
            write(1, "1", 1);
            octet = octet % div;
        }
        else
            write(1, "0", 1);
        div = div / 2;
    }
}
