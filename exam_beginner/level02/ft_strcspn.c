/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 19:29:36 by aponomar          #+#    #+#             */
/*   Updated: 2019/12/17 18:59:01 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t		ft_strcspn(const char *s, const char *reject)
{
	size_t	size;
	size_t	i;
	size_t	min_size;

	i = 0;
	min_size = 0;
	if (reject[i] == '\0')
	{
		while (s[i] != '\0')
			i++;
		return (i);
	}
	while (reject[i])
	{
		size = 0;
		while (s[size])
		{
			if (s[size] == reject[i])
			{
				if (size == 0)
					return (size);
				else if (min_size > size)
					min_size = size;
				else if (size > min_size && min_size == 0)
					min_size = size;
			}
			size++;
		}
		reject++;
	}
	if (min_size == 0)
		while (s[min_size])
			min_size++;
	return (min_size);
}

int			main(void)
{
	int		size;
	int		ft_size;

	// initializing strings
	char *str1 = "iiioritoiortiobnvnvnvnbngf";
	char *str2 = "sdfsgh";

	// using strcspn() to calculate initial chars
	// before 1st matching chars 'f'.
	// returns 24
	size = strcspn(str1, str2);
	ft_size = ft_strcspn(str1, str2);

	printf("The unmatched characters before first matched character (strcspn):\t%d\n", size);
	printf("The unmatched characters before first matched character (ft_strcspn):\t%d\n", ft_size);
}