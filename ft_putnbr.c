/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:47:15 by junkwama          #+#    #+#             */
/*   Updated: 2023/08/27 11:19:32 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	nb;
	int				prted_n;

	prted_n = 0;
	if (n < 0)
	{
		ft_putchar('-');
		prted_n++;
		nb = -n;
	}
	else
		nb = n;
	if (nb >= 10)
		prted_n = prted_n + ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
	prted_n++;
	return (prted_n);
}
