/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:22:27 by junkwama          #+#    #+#             */
/*   Updated: 2023/08/27 12:20:39 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_manager(char f, va_list arg)
{
	int	l;

	l = 0;
	if (f == 'c')
		l = l + ft_putchar(va_arg(arg, int));
	else if (f == '%')
		l = l + ft_putchar('%');
	else if (f == 's')
		l = l + ft_putstr(va_arg(arg, char *));
	else if (f == 'd' || f == 'i')
		l = l + ft_putnbr(va_arg(arg, int));
	else if (f == 'u')
		l = l + ft_put_unsigned_nbr(va_arg(arg, unsigned int));
	else if (f == 'p')
		l = l + ft_putptr(va_arg(arg, void *));
	else if (f == 'x')
		l = l + ft_put_hex(va_arg(arg, unsigned int), 0);
	else if (f == 'X')
		l = l + ft_put_hex(va_arg(arg, unsigned int), 1);
	return (l);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len = len + format_manager(str[i], arg);
		}
		else
			len = len + ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
