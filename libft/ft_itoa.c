/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 03:20:52 by junkwama          #+#    #+#             */
/*   Updated: 2023/05/30 08:56:17 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_lenght(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			i;
	int			len;
	long int	nb;
	char		*mal;

	len = ft_lenght(n);
	nb = n;
	mal = (char *)malloc((len + 1) * sizeof(char));
	if (mal == 0)
		return (NULL);
	i = 0;
	if (nb < 0)
	{
		mal[i] = '-';
		nb = -nb;
	}
	while (nb > 9)
	{
		mal[len - i - 1] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	mal[len - i - 1] = (nb % 10) + '0';
	mal[len] = '\0';
	return (mal);
}
