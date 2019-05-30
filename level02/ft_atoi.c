/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 10:24:18 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/12 10:35:22 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_atoi(const char *nptr)
{
	long long int	sign;
	long long int	nbr;

	nbr = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\r'
		|| *nptr == '\t' || *nptr == '\v' || *nptr == '\f')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		nbr = (nbr * 10) + (long long int)(*nptr - '0');
		nptr++;
	}
	return (nbr * sign);
}

int	main(void)
{
	char a[] = "     \n\n\v\f\r\t -52334244AA234243Aregfdsftdg";
	printf("%d\n", ft_atoi(a));
}
