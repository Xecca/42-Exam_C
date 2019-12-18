/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 19:29:36 by aponomar          #+#    #+#             */
/*   Updated: 2019/12/17 19:30:53 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <time.h>

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
	// Calculate the time taken by fun() 
	clock_t t; 
	t = clock();

	// int		size;
	int		ft_size;

	// initializing strings
	char *str1 = "11111111123112312312313123123123123123123123123123123123123123123123123123123123123123123123123123111111111231123123123131231231231231231231231231231231231231231231231231231231231231231231231231231111111112311231231231312312312312312312312312312312312312312312312312312312312312312312312312312311111111123112312312313123123123123123123123123123123123123123123123123123123123123123123123123123111111111231123123123131231231231231231231231231231231231231231231231231231231231231231231231231231111111112311231231231312312312312312312312312312312312312312312312312312312312312312312312312312311111111123112312312313123123123123123123123123123123123123123123123123123123123123123123123123123111111111231123123123131231231231231231231231231231231231231823123123123123123123123123123123123123";
	char *str2 = "0909090909090909090909090900dfgdsfgsdfgsdfg9898098-88-888887987878788798797897897987";

	// using strcspn() to calculate initial chars
	// before 1st matching chars 'f'.
	// returns 24
	// size = strcspn(str1, str2);
	ft_size = ft_strcspn(str1, str2);

	// printf("The unmatched characters before first matched character (strcspn):\t%d\n", size);
	printf("The unmatched characters before first matched character (ft_strcspn):\t%d\n", ft_size);

	t = clock() - t; 
	double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 

	// printf("strcspn took %f seconds to execute \n", time_taken);
	printf("ft_strcspn took %f seconds to execute \n", time_taken);

	return (0);
}