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

#include <stdlib.h>
#include <stdio.h>


int max(int* tab, unsigned int len)
{
	int max;
	unsigned int i;

	i = 0;
	max = 0;
	if (len > 0)
	{
		while (i < len)
		{
			if (tab[i] > max)
				max = tab[i];
			i++;
			return (max);
		}
	}
	return (0);
}

int		main(void)//
{
	int	*tab;//

	if (!(tab = (int*)malloc(sizeof(int) * 3)))//
		return (0);//
	tab[0] = 7;//
	tab[1] = 66;//
	tab[2] = 4;//
	printf("%d", max(tab, 3));//
	return (0);//
}//
