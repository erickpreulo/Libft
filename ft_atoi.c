/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 12:15:03 by egomes            #+#    #+#             */
/*   Updated: 2021/02/26 15:15:25 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	aux;

	sign = -1;
	result = 0;
	aux = 0;
	while (*str == '\t' || *str == '\v' || *str == '\n'
	|| *str == '\r' || *str == '\f' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = 1;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 - (*str++ - '0');
		if (aux < result)
		{
			if (sign < 0)
				return (-1);
			return (0);
		}
		aux = result;
	}
	return (result * sign);
}
