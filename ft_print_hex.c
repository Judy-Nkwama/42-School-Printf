/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:46:56 by junkwama          #+#    #+#             */
/*   Updated: 2023/08/27 13:33:08 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned long long int n, char *hex_chars, int *i)
{
	if (n >= 16)
		ft_print_hex(n / 16, hex_chars, i);
	ft_putchar(hex_chars[n % 16]);
	*i = *i + 1;
}
