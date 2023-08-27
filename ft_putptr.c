/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:46:50 by junkwama          #+#    #+#             */
/*   Updated: 2023/08/27 04:31:18 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hex(unsigned long long int n, char *hex_chars, int *i)
{
	if (n >= 16)
        print_hex(n / 16, hex_chars, i);
    ft_putchar(hex_chars[n % 16]);
    *i = *i + 1;
}

int	ft_putptr(void *ptr, int upper)
{
    char                        *hex_chrs;
	unsigned long long int		lliptr;
	int							i;

	i = 0;
	lliptr = (unsigned long long int)ptr;
	if (upper == 1)
		hex_chrs = "0123456789ABCDEF";
	else
		hex_chrs = "0123456789abcdef";
	write(1, "0x", 2);
	print_hex(lliptr, hex_chrs, &i);
	return (i + 2);
}
