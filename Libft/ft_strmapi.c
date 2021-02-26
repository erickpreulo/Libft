/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 19:34:43 by egomes            #+#    #+#             */
/*   Updated: 2021/02/17 15:29:12 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;

	if (!str || !f || !(newstr = ft_strdup(str)))
		return (0);
	i = 0;
	while (newstr[i])
	{
		newstr[i] = f(i, newstr[i]);
		i++;
	}
	return (newstr);
}
