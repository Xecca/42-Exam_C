/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 23:55:49 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/19 00:14:18 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int        max(int* tab, unsigned int len)
{
    int i;
    int max;
    
    i = 0;
    max = 0;
    if (len == 0)
        return (0);
    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i++];
        i++;
    }
    return (max);  
}
