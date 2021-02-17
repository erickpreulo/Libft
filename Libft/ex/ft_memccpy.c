/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 20:51:35 by egomes            #+#    #+#             */
/*   Updated: 2021/02/17 15:27:13 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			count;
	unsigned char	*srcc;
	unsigned char	*dstc;

	count = 0;
	srcc = (unsigned char*)src;
	dstc = (unsigned char*)dst;
	if (n)
	{
		while (count < n)
		{
			dstc[count] = srcc[count];
			if (srcc[count] == (unsigned char)c)
				return (&dstc[count + 1]);
			count++;
		}
	}
	return (NULL);
}
