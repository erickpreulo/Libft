/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:40:02 by egomes            #+#    #+#             */
/*   Updated: 2021/02/26 15:19:44 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;

	i = ft_strlen(s);
	if (c == '\0')
		return (ft_strchr(s, '\0'));
	while (i)
	{
		--i;
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
	}
	return (NULL);
}
