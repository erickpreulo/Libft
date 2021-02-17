/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prática.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 21:32:43 by egomes            #+#    #+#             */
/*   Updated: 2021/02/16 21:32:43 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void        *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t count;

    count = 0;
    while (count < n)
    {
        ((unsigned char*)dst)[count] = ((unsigned char*)src)[count];
        count++;
    }
    return (dst);
}