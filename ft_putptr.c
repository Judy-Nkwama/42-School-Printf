/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:46:50 by junkwama          #+#    #+#             */
/*   Updated: 2023/08/27 12:00:37 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	char						*hex_chrs;
	unsigned long long int		lliptr;
	int							i;

	i = 0;
	lliptr = (unsigned long long int)ptr;
	hex_chrs = "0123456789abcdef";
	write(1, "0x", 2);
	ft_print_hex(lliptr, hex_chrs, &i);
	return (i + 2);
}
