/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 19:10:18 by egomes            #+#    #+#             */
/*   Updated: 2021/02/17 15:27:10 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = n > 0 ? 0 : 1;
	nbr = nbr > 0 ? nbr : -nbr;
	while (n)
	{
		n /= 10;
		size++;
	}
	if (!(str = (char *)malloc(size + 1)))
		return (0);
	str[size--] = '\0';
	while (nbr > 0)
	{
		str[size--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		str[size] = '0';
	else if (size == 0 && str[1] != '\0')
		str[size--] = '-';
	return (str);
}
