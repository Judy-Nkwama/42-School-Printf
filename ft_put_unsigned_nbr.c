/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:48:15 by junkwama          #+#    #+#             */
/*   Updated: 2023/08/27 11:18:42 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_put_unsigned_nbr(unsigned nbr)
{
    int printed;

    printed = 0;
    if (nbr >= 10)
        printed = printed + ft_put_unsigned_nbr(nbr / 10);
    ft_putchar((nbr % 10) + 48);
    printed++;
    return (printed);
}
