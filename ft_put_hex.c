/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:50:30 by junkwama          #+#    #+#             */
/*   Updated: 2023/08/27 13:34:57 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned int nbr, int upper)
{
	int     printed;
	char    *hex_chrs;

	printed = 0;
	if (upper == 1)
		hex_chrs = "0123456789ABCDEF";
	else
		hex_chrs = "0123456789abcdef";
	ft_print_hex((unsigned long long int)nbr, hex_chrs, &printed);
	return (printed);
}
