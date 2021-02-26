/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 20:21:03 by egomes            #+#    #+#             */
/*   Updated: 2021/02/17 16:25:53 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *str, size_t n)
{
    size_t count;

    count = 0;
    while (count < n)
    {
        ((unsigned char*)str)[count] = 0;
        count++;
    }
}
