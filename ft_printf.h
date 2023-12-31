/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:05:47 by junkwama          #+#    #+#             */
/*   Updated: 2023/08/27 13:34:02 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdlib.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_putptr(void *ptr);
int		ft_put_unsigned_nbr(unsigned int nbr);
void	ft_print_hex(unsigned long long int n, char *hex_chars, int *i);
int		ft_put_hex(unsigned int nbr, int upper);

#endif
