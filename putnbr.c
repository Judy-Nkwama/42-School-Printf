/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:47:15 by junkwama          #+#    #+#             */
/*   Updated: 2023/08/27 01:47:19 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr(int n)
{
	unsigned int	nb;
	int				prted_n;

	prted_n = 0;
	if (n < 0)
	{
		putchar('-');
		prted_n++;
		nb = -n;
	}
	else
		nb = n;
	if (nb >= 10)
		prted_n = prted_n + putnbr(nb / 10, prted_n);
	putchar(nb % 10 + 48);
	prted_n++;
	return (prted_n);
}
