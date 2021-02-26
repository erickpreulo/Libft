/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:50:17 by egomes            #+#    #+#             */
/*   Updated: 2021/02/17 15:30:09 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!str || !(new_str = (char *)malloc(len + 1)))
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(str) && j < len)
		new_str[j++] = str[i++];
	new_str[j] = '\0';
	return (new_str);
}
