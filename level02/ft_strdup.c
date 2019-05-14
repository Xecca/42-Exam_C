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

char		*ft_strdup(char *src)
{
	char	*a;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	i = i + 1;
	a = (char*)malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	i--;
	while (i >= 0)
	{
		a[i] = src[i];
		i--;
	}
	return (a);
}
/*
    int main() {
    char *str = "Helloworldecckiy";
    char *result;
    result = ft_strdup(str);
    printf("The string : %s", result);
    return 0;
    }
*/
