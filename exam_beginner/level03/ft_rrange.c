/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 10:50:37 by aponomar          #+#    #+#             */
/*   Updated: 2019/12/17 14:03:20 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void print_array(int *ptr, size_t length)            
{         
    //for statement to print values using array             
    size_t i = 0;
    while (i < length)
	{
    	printf("%d\n", ptr[i]);
		i++;
	}
}   

// version 2 ("complex-stupid"):
// int		ft_length_array(int start, int end)
// {
// 	int n;
// 	int diff;

// 	n = 0;
// 	diff = 0;
// 	if (start == end)
// 		n = 1;
// 	else
// 	{
// 		diff = start;
// 		if (start > end)
// 			while (diff != end - 1)
// 			{
// 				diff--;
// 				n++;
// 			}
// 		else if (start < end)
// 			while (diff != end + 1)
// 			{
// 				diff++;
// 				n++;
// 			}
// 	}
// 	return (n);
// }

// int		*ft_rrange(int start, int end)
// {
// 	int *array;
// 	int n;
// 	int diff;

// 	n = 0;
// 	diff = 0;
// 	n = ft_length_array(start, end);
// 	array = (int *)malloc(n * sizeof(int));
// 	if (n == 1)
// 	{
// 		array[0] = start;
// 		return (array);
// 	}
// 	else if (start > end)
// 		while (diff < n)
// 		{
// 			array[diff] = start - diff;
// 			diff++;
// 		}
// 	else if (start < end)
// 		while (diff < n)
// 		{
// 			array[diff] = start + diff;
// 			diff++;
// 		}
// 	printf("n = %d\n", n);
// 	print_array(array, n);

// 	return (array);
// }

// version 1 ("normal"):
int		*ft_rrange(int start, int end)
{
	int *array;
	int n;
	int i;

	n = 1;
	i = 0;
	if (start == end)
		n = 1;
	else if (start > end)
		n = start - end;
	else
		n = end - start;
	array = (int *)malloc(sizeof(int) * (n));
	while (i <= n)
	{
		if (start > end)
			array[i] = start - i;
		else
			array[i] = start + i;
		i++;
	}
	if (start != end)
		n++;
	printf("n = %d\n", n);
	print_array(array, n);
	return (array);
}

int main()
{
	int st  = 11;
	int end = 1;
	int *array = ft_rrange(st, end);
	printf("first argument in array = [%d]\n", *array);

	return (0);
}
