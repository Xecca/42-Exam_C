/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 10:47:05 by aponomar          #+#    #+#             */
/*   Updated: 2019/04/12 11:04:14 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *s;
	int	len;

	len = 0;
	while (src[len])
		len++;
	if (!(s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[len] = '\0';
	while (len >= 0)
	{
		s[len] = src[len];
		len--;
	}
	return (s);
}
