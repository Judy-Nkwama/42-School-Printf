/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:05:47 by junkwama          #+#    #+#             */
/*   Updated: 2023/08/27 01:27:12 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdlib.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	putchar(char c);
int	putnbr(int n);
int	putstr(char *s);
int	putptr(void *ptr);

#endif
