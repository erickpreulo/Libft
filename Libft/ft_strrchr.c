/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:40:02 by egomes            #+#    #+#             */
/*   Updated: 2021/02/17 15:30:01 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	const char	*ini;

	ini = str;
	i = ft_strlen(str);
	str = (str + i);
	while (*str != *ini && c != *str)
		str--;
	if (c == *str)
		return ((char *)str);
	return (0);
}
