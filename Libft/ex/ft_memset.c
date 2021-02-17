/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 20:07:18 by egomes            #+#    #+#             */
/*   Updated: 2021/02/11 20:07:18 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t count;

    count = 0;
    while (count < len)
    {
        ((unsigned char*)b)[count] = (unsigned char)c;
        count++;
    }
    return (b);
}
