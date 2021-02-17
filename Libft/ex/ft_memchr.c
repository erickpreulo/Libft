/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 14:56:08 by egomes            #+#    #+#             */
/*   Updated: 2021/02/17 15:27:44 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t count;

	count = 0;
	while (count < n)
	{
		if (((unsigned char*)s)[count] == (unsigned char)c)
			return (&((unsigned char*)s)[count]);
		else
			count++;
	}
	return (NULL);
}
